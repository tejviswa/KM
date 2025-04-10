# Monitoring Multiple File Descriptors using `select()` in C

## 📌 What is `select()`?

`select()` is a powerful system call in Unix/Linux used to monitor multiple file descriptors (FDs) simultaneously. It tells the kernel to wait for one or more of the FDs to become "ready" for I/O operations (read, write, or exception).

---

## 🧠 Why Use `select()`?

- **Monitor multiple inputs at the same time** (e.g., keyboard, mouse, sockets)
- **Avoid polling**, which wastes CPU
- **React only when something happens**
- **Efficient and scalable** for many FDs

---

## 🔧 Key Macros Used with `select()`

| Macro     | Description |
|-----------|-------------|
| `FD_ZERO(&set)` | Clears the FD set |
| `FD_SET(fd, &set)` | Adds `fd` to the set |
| `FD_ISSET(fd, &set)` | Checks if `fd` is ready (after `select()` returns) |
| `FD_CLR(fd, &set)` | Removes `fd` from the set |

`fd_set` is the data type used to hold the list of file descriptors.

---

## 🧪 Basic Example (Keyboard & Mouse Input)
```c
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/select.h>
#include <linux/input.h>

int main() {
    int kbd_fd, mouse_fd, ret;
    struct input_event temp;
    fd_set read_fd;

    // Open keyboard and mouse device files
    kbd_fd = open("/dev/input/event2", O_RDONLY);
    mouse_fd = open("/dev/input/event4", O_RDONLY);

    if (kbd_fd < 0 || mouse_fd < 0) {
        perror("Device open failed");
        return 1;
    }

    while (1) {
        FD_ZERO(&read_fd);                     // Clear the set before each loop
        FD_SET(kbd_fd, &read_fd);              // Add keyboard FD
        FD_SET(mouse_fd, &read_fd);            // Add mouse FD

        ret = select(FD_SETSIZE, &read_fd, NULL, NULL, NULL); // Wait indefinitely

        if (FD_ISSET(kbd_fd, &read_fd)) {      // Check if keyboard input is ready
            read(kbd_fd, &temp, sizeof(temp));
            printf("[Keyboard] code:%d value:%d type:%d\n", temp.code, temp.value, temp.type);
        }

        if (FD_ISSET(mouse_fd, &read_fd)) {    // Check if mouse input is ready
            read(mouse_fd, &temp, sizeof(temp));
            printf("[Mouse] code:%d value:%d type:%d\n", temp.code, temp.value, temp.type);
        }
    }

    close(kbd_fd);
    close(mouse_fd);
    return 0;
}
```

### 🔍 Code Explanation:
- `open()` is used to get file descriptors for keyboard and mouse devices.
- `FD_ZERO` clears the `fd_set` before each `select()` call.
- `FD_SET` adds the keyboard and mouse descriptors to the `fd_set`.
- `select()` monitors the FDs and blocks until one of them is ready.
- `FD_ISSET` checks if a particular FD is ready, and then `read()` is called to fetch the event.

---

## ⏱️ Adding a Timeout

You can add a timeout to avoid blocking forever:

```c
struct timeval timeout;
timeout.tv_sec = 5;
timeout.tv_usec = 0;

ret = select(FD_SETSIZE, &read_fd, NULL, NULL, &timeout);
```

If nothing happens within 5 seconds, `select()` returns 0.

### Example with Timeout Handling
```c
if (ret == 0) {
    printf("⏰ Timeout: No input within 5 seconds.\n");
    continue;
}
```

---

## 💡 Summary
- Use `select()` to efficiently wait for multiple inputs
- `fd_set` holds the FDs to monitor
- Use macros to prepare and inspect the FD set
- Optional `timeout` helps you avoid getting stuck

---

## ✅ Real-world Uses
- GUI systems
- Event-driven servers
- Embedded systems with sensors
- Network socket programming

---

