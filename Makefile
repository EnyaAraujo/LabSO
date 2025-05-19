CC = cc
CFLAGS = -Wall -g

all: principal hello_world

principal: principal.o
	$(CC) principal.o -o principal

hello_world: hello_world.o
	$(CC) hello_world.o -o hello_world

principal.o: principal.c
	$(CC) $(CFLAGS) -c principal.c -o principal.o

hello_world.o: hello_world.c
	$(CC) $(CFLAGS) -c hello_world.c -o hello_world.o

clean:
	rm -f *.o principal hello_world

.PHONY: all clean
