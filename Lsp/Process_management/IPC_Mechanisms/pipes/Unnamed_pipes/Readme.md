Absolutely! Let's go **step-by-step** and provide a complete, **well-defined explanation** of **Unnamed Pipes** as part of our deep IPC dive.

---

# 🧪 IPC Mechanism: **Unnamed Pipe**

---

## 📖 Definition

> An **Unnamed Pipe** is a **half-duplex (unidirectional)** communication mechanism that allows **inter-process communication** between **related processes** (usually a parent and its child).  
> It is a **temporary**, **memory-based** communication channel created using the `pipe()` system call and does **not exist** in the filesystem.

---

## 🧠 Key Properties of Unnamed Pipes

| Property            | Description                                                                 |
|---------------------|-----------------------------------------------------------------------------|
| **Type**            | Half-duplex (unidirectional)                                                |
| **Scope**           | Related processes only (parent-child, siblings via `fork()`)               |
| **Creation**        | `pipe()` system call                                                        |
| **Naming**          | No name in the filesystem (in contrast to FIFOs)                            |
| **Persistence**     | Lives only during the lifetime of the process(es)                           |
| **Data Transfer**   | Raw byte stream (no structure or message boundaries)                        |
| **Blocking I/O**    | Yes (by default, read/write can block)                                      |
| **Kernel Support**  | Kernel manages buffer (usually 4KB to 64KB buffer)                          |

---

## 🧰 System Call: `pipe()`

```c
#include <unistd.h>
int pipe(int fd[2]);
```

### 🛠️ Parameters
- `fd[0]` – File descriptor for **reading**
- `fd[1]` – File descriptor for **writing**

### 🔁 Return Value
- `0` on success
- `-1` on failure

After calling `pipe(fd)`, the file descriptors in `fd[0]` and `fd[1]` are connected in memory.

---

## ⚙️ Example Program – Parent Sends, Child Receives

```c
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main() {
    int fd[2];
    pid_t pid;
    char buffer[100];

    if (pipe(fd) == -1) {
        perror("pipe");
        return 1;
    }

    pid = fork(); // Create child process

    if (pid == 0) {
        // Child Process
        close(fd[1]); // Close unused write end
        read(fd[0], buffer, sizeof(buffer)); // Read from pipe
        printf("Child received: %s\n", buffer);
        close(fd[0]);
    } else {
        // Parent Process
        close(fd[0]); // Close unused read end
        char message[] = "Hello from parent!";
        write(fd[1], message, strlen(message) + 1); // Write to pipe
        close(fd[1]);
    }

    return 0;
}
```

---

## 🔄 Flow Explanation

1. `pipe(fd)` creates a pipe
2. `fork()` duplicates the process
3. Parent closes read-end and writes data
4. Child closes write-end and reads data
5. Message is transferred via kernel-managed buffer

---

## 📚 Important Points

### ✅ Close Unused Ends
- Helps avoid deadlock and makes EOF detection work correctly.

### ✅ Blocking Behavior
- `read()` blocks until data is written
- `write()` blocks if buffer is full

### ✅ EOF Handling
- When all write ends are closed, `read()` returns `0` (EOF)

---

## 🔁 For Bidirectional Communication

> Use **two unnamed pipes**:
- One for parent ➡️ child
- One for child ➡️ parent

---

## 🧪 Example: Two-Way Communication with Two Pipes

```c
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main() {
    int p1[2], p2[2];
    char buffer[100];
    pid_t pid;

    pipe(p1); // Parent ➡️ Child
    pipe(p2); // Child ➡️ Parent

    pid = fork();

    if (pid == 0) {
        // Child
        close(p1[1]);
        close(p2[0]);
        read(p1[0], buffer, sizeof(buffer));
        printf("Child got: %s\n", buffer);
        char reply[] = "Hi from child!";
        write(p2[1], reply, strlen(reply) + 1);
    } else {
        // Parent
        close(p1[0]);
        close(p2[1]);
        char msg[] = "Hello from parent!";
        write(p1[1], msg, strlen(msg) + 1);
        read(p2[0], buffer, sizeof(buffer));
        printf("Parent got: %s\n", buffer);
    }

    return 0;
}
```

---

## ✅ Summary

| Feature              | Description |
|----------------------|-------------|
| **Usage**            | Simple, fast IPC between related processes |
| **Blocking**         | Yes, by default |
| **Security**         | Safer (not exposed in filesystem) |
| **Direction**        | One-way per pipe |
| **Best For**         | Small, temporary data transfer between forked processes |

---







# 📦 IPC Mechanism: **Named Pipes (FIFOs)**

---

## 📖 Definition

> A **Named Pipe**, also called a **FIFO (First In First Out)** special file, is an IPC mechanism that allows **unrelated processes** to communicate with each other using a file-like interface.  
> Unlike unnamed pipes, FIFOs are **persistent objects** in the filesystem, created using the `mkfifo()` system call or `mknod` command.

---

## 🧠 Key Properties of Named Pipes

| Property            | Description                                                                 |
|---------------------|-----------------------------------------------------------------------------|
| **Type**            | Half-duplex (unidirectional)                                                |
| **Scope**           | Between **unrelated processes**                                             |
| **Naming**          | Exists as a file in the filesystem                                          |
| **Persistence**     | Exists until deleted (even after process exits)                             |
| **Creation**        | `mkfifo()` or shell `mkfifo` command                                        |
| **Location**        | File path (e.g., `/tmp/myfifo`)                                             |
| **Communication**   | Via file descriptors using `open()`, `read()`, `write()`                    |
| **Data Transfer**   | Byte-stream; no message boundaries                                          |
| **Blocking**        | Yes (reader blocks if no writer and vice versa)

---

## 📦 `mkfifo()` System Call

```c
#include <sys/types.h>
#include <sys/stat.h>

int mkfifo(const char *pathname, mode_t mode);
```

### 🛠️ Parameters:
- `pathname`: Path to FIFO file (e.g., `/tmp/myfifo`)
- `mode`: Permissions (e.g., `0666` for read & write)

---

## ✅ Example – **Two Processes using FIFO**

---

### 🔧 Step 1: Writer Process (writer.c)

```c
#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>

int main() {
    int fd;
    char *fifo = "/tmp/myfifo";

    mkfifo(fifo, 0666); // Create FIFO if not exists

    fd = open(fifo, O_WRONLY);
    char msg[] = "Hello from writer!";
    write(fd, msg, strlen(msg) + 1);
    close(fd);

    return 0;
}
```

---

### 🔧 Step 2: Reader Process (reader.c)

```c
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main() {
    int fd;
    char *fifo = "/tmp/myfifo";
    char buffer[100];

    fd = open(fifo, O_RDONLY);
    read(fd, buffer, sizeof(buffer));
    printf("Reader received: %s\n", buffer);
    close(fd);

    return 0;
}
```

---

## 🔄 Flow

1. **Writer** creates a FIFO file (`/tmp/myfifo`)
2. It **writes** a message using `write()`
3. **Reader** opens same FIFO and reads using `read()`
4. FIFO acts as a **one-way channel**

---

## ⚠️ Blocking Behavior

- If the **reader** opens FIFO first, it will **block** until a **writer** opens it.
- Similarly, **writer** blocks if there's no **reader**.

You can use **O_NONBLOCK** with `open()` to avoid blocking:

```c
fd = open(fifo, O_RDONLY | O_NONBLOCK);
```

---

## 🧪 Shell Example using `mkfifo`

```bash
$ mkfifo mypipe
$ echo "Hi there" > mypipe   # In one terminal
$ cat < mypipe               # In another terminal
```

---

## 🧽 Cleanup

```bash
$ rm /tmp/myfifo
```

---

## ✅ Summary

| Feature              | Description |
|----------------------|-------------|
| **Persistence**       | Exists as a real file |
| **Scope**             | Allows unrelated processes |
| **Blocking**          | Yes, unless O_NONBLOCK used |
| **Best Use**          | IPC between different programs/scripts |
| **Limitation**        | One-direction per FIFO |

---

Would you like to continue with **Message Queues** next, or dive deeper into FIFO variations like bi-directional communication using two FIFOs?
