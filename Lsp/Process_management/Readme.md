# 31-Jan-2025   Topic: Assignments on Process management system calls

Process Management

getpid.c - shows current pid & parents pid numbers.

starting a new process: system() library.

system.c   -  A program that calls another program using the system command.

Replacing a  process image: execve() systemcall.

execve.c    -  A program that replaces a process image using the execlp command.


## Children same as parent:

Duplicating a process image: fork() systemcall.
+fork1.c     -  A program that duplicates a process image using the fork command.
+fork2.c     -  A program parent terminate earlier than the children. Drawback: unexpected results.
+fork3.c     -  A program that uses the wait command to wait for a child process to finish.
+fork-zombiee.c     -  fork1.c changed so that a zombie process is created.


## Children not same as parent:

+fork-exec.c    - A Program create a ls process is not same as a parent.

## Lab Assignment:

WAP your own version of system library?
WAP your own version of shell?
