





CC=gcc

all:calc
	echo "Build done"

calc:main.o add/add.o sub/sub.o
	${CC} main.o add/add.o sub/sub.o -o calc

main.o:main.c
	${CC} -c main.c

add/add.o:add/add.c
	make -C add

sub/sub.o:sub/sub.c
	make -C sub

clean:
	rm *.o
	make -C add clean
	make -C sub clean

install:
	sudo cp calc /bin

uninstall:
	sudo rm  /bin/calc



