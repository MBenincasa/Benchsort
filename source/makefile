all: benchsort.out

benchsort.out: benchsort.o mergesort.o quicksort.o insertionsort.o selectionsort.o bubblesort.o util.o
	gcc benchsort.o mergesort.o quicksort.o insertionsort.o selectionsort.o bubblesort.o util.o -o benchsort.out
	
benchsort.o: util.h sort.h benchsort.c
	gcc -c benchsort.c
	
mergesort.o: sort.h mergesort.c
	gcc -c mergesort.c

quicksort.o: sort.h quicksort.c
	gcc -c quicksort.c
	
insertionsort.o: sort.h insertionsort.c
	gcc -c insertionsort.c
	
selectionsort.o: sort.h selectionsort.c
	gcc -c selectionsort.c
	
bubblesort.o: sort.h bubblesort.c
	gcc -c bubblesort.c
	
util.o: util.h util.c
	gcc -c util.c

clean:
	rm -f quicksort.o mergesort.o benchsort.o insertionsort.o selectionsort.o bubblesort.o util.o
