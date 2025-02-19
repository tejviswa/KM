include .config

ifdef CONFIG_ADD
	GCC_CC := -DADD
endif

ifdef CONFIG_SUB
	GCC_CC += -DSUB
endif

ifdef CONFIG_MUL
	GCC_CC += -DMUL
endif

ifdef CONFIG_DIV
	GCC_CC += -DDIV
endif

ifdef CONFIG_DEBUG
	GCC_CC += -g
endif



ifdef CONFIG_STATIC
	GCC_LD := -static
endif

CC=gcc


all: ../bin/calc
	echo "Build done"

../bin/calc:main.o
	${CC} ${GCC_LD} main.o -L ../lib -lcalc-static -o ../bin/calc

main.o:../lib/libcalc-static.a
	${CC} ${GCC_CC} -I ../inc -c main.c

../lib/libcalc-static.a:
	make -C ../lib

clean:
	rm *.o  ../bin/calc
	make -C ../lib clean





