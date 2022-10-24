# Variables to control Makefile operation

CC = g++
CFLAGS = -Wall -g

earthquake_paintshop: earthquake_paintshop.o
	$(CC) $(CFLAGS) -o earthquake_paintshop earthquake_paintshop.o

earthquake_paintshop.o: earthquake_paintshop.cpp
	$(CC) $(CFLAGS) -c earthquake_paintshop.cpp

clean:
	rm -rf earthquake_paintshop earthquake_paintshop.o
