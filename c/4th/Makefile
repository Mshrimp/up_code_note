CC=gcc
OBJECTS = 2.o hello.o world.o
OBJECTS += test.o
tar=hello
tar?=world
x=$(tar)xy


all: $(OBJECTS)
	$(CC)  $^ -o hello
#2.o: 2.c func.h
#	gcc -c $<
#hello.o: hello.c func.h
#	gcc -c $<
#world.o: world.c func.h
#	gcc -c $<

install:
	@cp hello /usr/bin/ -f
uninstall:
	@rm /usr/bin/hello -f

.PHONY:clean
clean:
	@rm *.o /usr/bin/hello hello -f
1:
	echo "hello"

3:
	@echo $(tar)
	@echo $(x)


#.PHONY:hello
#hello:
#	echo "AAAAAAAAAA"
