CC=gcc
OBJECTS=hello.o main.o add.o
TAR=hello

all:$(OBJECTS)
	@$(CC) $^ -o hello
install:
	cp hello /usr/bin/ -f
uninstall:
	rm /usr/bin/hello
clean:
	rm *.o hello /usr/bin/hello -f
