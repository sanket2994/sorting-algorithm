cc= gcc
elf= test
cfiles= test.c
obj_files = test.o sort.o
hdrfiles= sort.h

default: all clean

all: sort.o test.o
	$(cc) $(obj_files) -o $(elf)

sort.o: sort.c
	$(cc) -c sort.c

test.o: test.c
	$(cc) -c test.c

clean:
	rm -rf *.o

cleanall:
	rm -rf $(elf) *.o
