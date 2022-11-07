#
#
#
CC=gcc
CFLAGS=-Wall 


#all : longest_line
#.PHONY : all
#
# erTi faili
longest : longest_line.o
	$(CC) $(CFLAGS) -o udidesi longest_line.o
	
longest_line.o : longest_line.c
	$(CC) $(CFLAGS) -c -o longest_line.o longest_line.c
	
#
#
# mravali faili
extended : main.o getline.o copy.o 
	$(CC) $(CFLAGS) -o maqsimaluri main.o getline.o copy.o 
	
main.o : main.c
	$(CC) $(CFLAGS) -c -o main.o main.c
	
getline.o : getline.c
	$(CC) $(CFLAGS) -c -o getline.o getline.c
	
copy.o : copy.c
	$(CC) $(CFLAGS) -c -o copy.o copy.c
	
	
.PHONY: clean
clean : 
	rm -rf *.o 
	

