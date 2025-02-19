

all:bin/calc
	echo "build done"

bin/calc:./lib/libcalc-static.a
	gcc -static ./src/main.c -L ./lib/ -lcalc-static -o bin/calc 


./lib/libcalc-static.a:./lib/*.c
	gcc -c ./lib/add.c
	gcc -c ./lib/sub.c
	mv *.o ./lib
	ar -rcs libcalc-static.a ./lib/*.o
	mv *.a ./lib

clean:
	rm  ./lib/*.o
	rm  bin/calc
	rm  ./lib/*.a

	
