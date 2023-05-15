cc=gcc

all: main.o hello.o add.o
	$(cc) main.o hello.o add.o -o final
main: main.c header.h
	$(cc)-c main.c
hello: hello.c header.h
	$(cc)-c hello.c
add: add.c header.h
	$(cc)-c add.c

clean:
	rm *.o final
