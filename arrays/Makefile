CC=gcc
CFLAGS=-Wall -o

store: store_array.c
	$(CC) $(CFLAGS) store.out store_array.c
	./store.out

reverse: reverse_array.c
	$(CC) $(CFLAGS) reverse.out reverse_array.c
	./reverse.out

sum: sum_array.c
	$(CC) $(CFLAGS) sum.out sum_array.c
	./sum.out

copy: copy_array.c
	$(CC) $(CFLAGS) copy.out copy_array.c
	./copy.out

duplicate1: duplicate_array.c
	$(CC) $(CFLAGS) duplicate1.out duplicate_array.c
	./duplicate1.out
	
duplicate2: duplicate_array_alt.c
	$(CC) $(CFLAGS) duplicate2.out duplicate_array_alt.c
	./duplicate2.out
	
unique: unique_array.c
	$(CC) $(CFLAGS) unique.out unique_array.c
	./unique.out
	
clean:
	rm *.out
