CC= g++
CFLAGS= -o -Wall

all: lab0 main.o

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

clean:
	rm *o lab0

