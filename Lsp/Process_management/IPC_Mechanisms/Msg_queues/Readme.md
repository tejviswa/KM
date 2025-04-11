Absolutely! Let’s walk through the **System V Message Queue** example **step by step**, explaining **both sender and receiver code** clearly.

---

## 📨 `msg_sender.c` – Step-by-step Explanation

```c
#include <stdio.h>
#include <stdlib.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <string.h>
```
📌 **Header files** for:
- `stdio.h`, `stdlib.h` – basic input/output and memory functions.
- `sys/ipc.h` – for `ftok()` and IPC key types.
- `sys/msg.h` – for `msgget()`, `msgsnd()` etc.
- `string.h` – for `strcpy()`.

---

```c
struct msg_buffer {
    long msg_type;
    char msg_text[100];
};
```
✅ A structure that represents a message.  
- `msg_type` is required and must be **positive**.
- `msg_text` is the **actual message** content.

---

```c
key_t key;
int msgid;
struct msg_buffer message;
```
👉 Variables for:
- `key`: unique identifier for the message queue.
- `msgid`: message queue ID returned by `msgget()`.
- `message`: instance of the message structure.

---

```c
key = ftok("progfile", 65);
```
📌 `ftok()` generates a unique key based on:
- A filename (`progfile` must exist).
- A project ID (`65` in this case).

---

```c
msgid = msgget(key, 0666 | IPC_CREAT);
```
✅ Creates or accesses the message queue with:
- `0666` – read & write permissions for everyone.
- `IPC_CREAT` – create if it doesn't exist.

---

```c
message.msg_type = 1;
strcpy(message.msg_text, "Hello from sender!");
```
✅ Fill the message:
- Type: `1` (used to filter messages).
- Message text: `"Hello from sender!"`

---

```c
msgsnd(msgid, &message, sizeof(message.msg_text), 0);
```
🛜 Sends the message to the queue:
- `message` is the data to send.
- `sizeof(msg_text)` tells how many bytes to send (excluding `msg_type`).
- `0` = blocking mode.

---

```c
printf("Message sent: %s\n", message.msg_text);
```
✅ Confirmation print after sending.

---

### 🎯 Output (sender)
```
Message sent: Hello from sender!
```

---

## 📬 `msg_receiver.c` – Step-by-step Explanation

```c
#include <stdio.h>
#include <stdlib.h>
#include <sys/ipc.h>
#include <sys/msg.h>
```
✅ Same headers as sender.

---

```c
struct msg_buffer {
    long msg_type;
    char msg_text[100];
};
```
✅ Must match the structure used in sender.

---

```c
key_t key;
int msgid;
struct msg_buffer message;
```
✅ Same declarations as sender.

---

```c
key = ftok("progfile", 65);
```
🎯 Generates the **same key** as the sender to access the same queue.

---

```c
msgid = msgget(key, 0666 | IPC_CREAT);
```
✅ Opens the same message queue.

---

```c
msgrcv(msgid, &message, sizeof(message.msg_text), 1, 0);
```
📥 Receives a message of `msg_type = 1`:
- `msgid` – queue ID.
- `message` – buffer to store the result.
- `sizeof(message.msg_text)` – size of expected message.
- `1` – receive message with type `1`.
- `0` – blocking read (waits if message not yet available).

---

```c
printf("Received message: %s\n", message.msg_text);
```
✅ Prints the received message.

---

```c
msgctl(msgid, IPC_RMID, NULL);
```
🧹 Removes the message queue from the system.

---

### 🎯 Output (receiver)
```
Received message: Hello from sender!
```

---

## 📦 IPC in Action

Here’s how the full flow works:

```text
[Sender]
  └── ftok() → msgget() → msgsnd()
                          ↓
                      [Kernel Message Queue Buffer]
                          ↓
  ┌─────── msgrcv() ← msgget() ← ftok()
  │
[Receiver]
```

---

## ✅ Summary

| Function      | Description                          |
|---------------|--------------------------------------|
| `ftok()`      | Generate unique IPC key              |
| `msgget()`    | Create or access message queue       |
| `msgsnd()`    | Send message to queue                |
| `msgrcv()`    | Receive message from queue           |
| `msgctl()`    | Control operation (remove queue)     |

Would you like to explore the same example using **POSIX message queues** next (with priorities and file descriptors)?
