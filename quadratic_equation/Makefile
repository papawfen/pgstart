CC=gcc
CFLAGS=-Wall -Werror -Wextra

ifeq ($(shell uname), Linux)
	CHKFLAGS=-pthread -lcheck_pic -pthread -lrt -lm -lsubunit
else
	CHKFLAGS=-lcheck
endif

all: clean check

clean: 
	@rm -rf *.o *.out test equation quadratic_equation.a

lib:
	gcc -o quadratic_equation.o quadratic_equation.c -c
	ar crs quadratic_equation.a quadratic_equation.o

check:
	$(CC) $(CFLAGS) quadratic_equation.c -c -o quadratic_equation.o
	$(CC) $(CFLAGS) tests/tests.c -c -o test.o
	$(CC) test.o quadratic_equation.o -o test $(CHKFLAGS)
	./test

build:
	$(CC) $(CFLAGS) -g quadratic_equation.c -o equation