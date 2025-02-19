

all: ../bin/calc
	echo "build done"

../bin/calc:main.o
	gcc  -static main.o -L../lib -lcalc-static -o ../bin/calc

main.o:../lib/libcalc-static.a
	gcc -c main.c

../lib/libcalc-static.a:
	make -C ../lib statlib

clean:
	rm  ../bin/calc
	rm *.o
	make -C ../lib clean

