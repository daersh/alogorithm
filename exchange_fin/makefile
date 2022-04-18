all: sort

sort: common.h common.o test.o
	gcc -o sort test.o common.o

test.o: test.c
	gcc -c test.c

common.o : common.c common.h
	gcc -c common.c common.h

clean:
	-rm sort
	-rm common.o
	-rm test.o