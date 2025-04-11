all:shmwrite shmread shmctl

shmwrite:shmwrite.o
	gcc  shmwrite.o -o shmwrite
shmwrite.o:shmwrite.c
	gcc -c shmwrite.c


shmread:shmread.o
	gcc  shmread.o -o shmread
shmread.o:shmread.c
	gcc -c shmread.c


shmctl:shmctl.o
	gcc  shmctl.o -o shmctl
shmctl.o:shmctl.c
	gcc -c shmctl.c

clean:
	rm *.o shmwrite shmread shmctl
