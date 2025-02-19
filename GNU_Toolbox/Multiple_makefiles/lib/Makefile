







statlib:libcalc-static.a
	echo "static lib created"

libcalc-static.a:add.c sub.c
	gcc -c add.c 
	gcc -c sub.c
	ar -rcs -o libcalc-static.a add.o sub.o


dynlib:libcalc-dynamic.so
	echo "dynamic lib created"

libcalc-dynamic.so:add.c sub.c
	gcc -c -fpic add.c
	gcc -c -fpic sub.c
	gcc -shared -o libcalc-dynamic.so add.o sub.o
	export LD_LIBRARY_PATH = ./


clean:
	rm *.o *.a 



