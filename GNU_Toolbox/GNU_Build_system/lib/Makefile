







statlib:libcalc-static.a
	echo "static lib created"

libcalc-static.a:add.c sub.c mul.c div.c
	gcc -c add.c 
	gcc -c sub.c
	gcc -c mul.c
	gcc -c div.c
	ar -rcs -o libcalc-static.a add.o sub.o mul.o div.o


dynlib:libcalc-dynamic.so
	echo "dynamic lib created"

libcalc-dynamic.so:add.c sub.c mul.c div.c
	gcc -c -fpic add.c
	gcc -c -fpic sub.c
	gcc -c -fpic mul.c
	gcc -c -fpic div.c
	gcc -shared -o libcalc-dynamic.so add.o sub.o mul.o div.o


clean:
	rm *.o *.a 



