#include "util.h"
#include "sort.h"

int main(int argc, char *argv[]){
	int c;
	int arr_size = 100;
	struct timeval stop, start;
	char *nopt;

	int arr[MAX_SIZE];
    
    if(argc == 1){
    	printf ("Digita ./benchsort.out -h per la guida rapida\n");
    }
	
	while((c = getopt(argc, argv, "mqsibhn:")) != -1){
	
		switch(c){
			case 'm':
				*arr = randArray(arr, arr_size);
				printf("\nHai scelto mergeSort\n");
				printArray(arr, arr_size);
				
				gettimeofday(&start, NULL);
    			mergeSort(arr, 0, arr_size - 1);
    			gettimeofday(&stop, NULL);
    			
				printArray(arr, arr_size);
				printf("Sorted array by mergeSort in %lu us (microseconds) \n\n", (stop.tv_sec - start.tv_sec) * 1000000 + stop.tv_usec - start.tv_usec); 
				
				break;
				
			case 'q':
				*arr = randArray(arr, arr_size);
				printf("\nHai scelto quickSort\n");
				printArray(arr, arr_size);
				
				gettimeofday(&start, NULL);
    			quickSort(arr, 0, arr_size-1); 
    			gettimeofday(&stop, NULL);
    			
    			printArray(arr, arr_size);
    			printf("Sorted array by quickSort in: %lu us (microseconds) \n\n", (stop.tv_sec - start.tv_sec) * 1000000 + stop.tv_usec - start.tv_usec); 
				
				break;
				
			case 'b':
				*arr = randArray(arr, arr_size);
				printf("\nHai scelto bubbleSort\n");
				printArray(arr, arr_size);
				
				gettimeofday(&start, NULL);
				bubbleSort(arr, arr_size);
				gettimeofday(&stop, NULL);
    			
    			printArray(arr, arr_size);
    			printf("Sorted array by bubbleSort in: %lu us (microseconds) \n\n", (stop.tv_sec - start.tv_sec) * 1000000 + stop.tv_usec - start.tv_usec); 
				
				break;
			
			case 's':
				*arr = randArray(arr, arr_size);
				printf("\nHai scelto selectionSort\n");
				printArray(arr, arr_size);
				
				gettimeofday(&start, NULL);
				selectionSort(arr, arr_size);
				gettimeofday(&stop, NULL);
    			
    			printArray(arr, arr_size);
    			printf("Sorted array by selectionSort in: %lu us (microseconds) \n\n", (stop.tv_sec - start.tv_sec) * 1000000 + stop.tv_usec - start.tv_usec); 
				
				break;
			
			case 'i':
				*arr = randArray(arr, arr_size);
				printf("\nHai scelto insertionSort\n");
				printArray(arr, arr_size);
				
				gettimeofday(&start, NULL);
				insertionSort(arr, arr_size);
				gettimeofday(&stop, NULL);
    			
    			printArray(arr, arr_size);
    			printf("Sorted array by insertionSort in: %lu us (microseconds) \n\n", (stop.tv_sec - start.tv_sec) * 1000000 + stop.tv_usec - start.tv_usec); 
				
				break;
				
			case 'h':
				printf("Guida rapida per usare benchsort\n\n");
				printf("\t-m\t\tmergesort\n");
				printf("\t-q\t\tquicksort\n");
				printf("\t-s\t\tselectionsort\n");
				printf("\t-i\t\tinsertionsort\n");
				printf("\t-b\t\tbubblesort\n");
				printf("\t-n param\tsize of array\n");
				printf("\n\tEsempio: ./bencksort.out -n 64 -qi\n");
				
				break;
				
			case 'n':
            	nopt = optarg;
            	int temp;
            	
            	if((temp = atoi(nopt)) <= MAX_SIZE)
            		arr_size = atoi(nopt);
            	else
            		printf("La size selezionata supera la MAX_SIZE. Verrà usata la size di default.\n");
            		
            	printf("L'array è di grandezza %d\n\n", arr_size);
            	
            	break;
				
		
			default:
            	printf ("Digita ./benchsort.out -h per la guida rapida\n");
            	break;
        }
    }
	
	return 0;
}
