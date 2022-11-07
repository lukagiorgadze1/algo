#
#
#
CC=gcc
CFLAGS=-Wall
ECHO=@echo


all : input2output
.PHONY : all

input2output : input2output.o 
	$(CC) $(CFLAGS) -o input2output input2output.o
	$(ECHO)
	
	
input2output.o : input2output.c
	$(ECHO)
	$(CC) $(CFLAGS) -c -o input2output.o input2output.c


#input2output.o : input2output.S	
#	$(CC) $(CFLAGS) -c -o input2output.o input2output.s
#
#input2output.S : input2output.E 
#	$(CC) $(CFLAGS) -S -o input2output.s input2output.i
#	
#input2output.E : input2output.c
#	$(ECHO)
#	$(CC) $(CFLAGS) -E -o input2output.i input2output.c


debug : clean input2output.c
	$(CC) $(CFLAGS) -g -o test input2output.c
	gdb -tui  test

	
	
.PHONY: clean
clean : 
	rm -rf *.o *.s *.i test
	

