#include "sort.h"
#include <sys/time.h>

void printArray(int A[], int size) { 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", A[i]); 
    printf("\n"); 
}

int *randArray(int arr[]){
	int i, n;
    time_t t;
    
    srand((unsigned) time(&t));
    for(i = 0; i < MAX_SIZE; i++)
       arr[i] = rand() % 100000;
       
    return *arr;
}

int main() { 
    int arr[MAX_SIZE];
    struct timeval stop, start;
	
	*arr = randArray(arr);
    
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    
    printf("Running different sorting algorithms on %d numbers (from 0 to 99.999).\n", MAX_SIZE);
    
    /*MERGESORT*/
  
    //printf("\nGiven array is \n"); 
    //printArray(arr, arr_size);
	
	gettimeofday(&start, NULL);
	 
    mergeSort(arr, 0, arr_size - 1);
    
    gettimeofday(&stop, NULL);
    
    printf("\nSorted array by mergeSort in %lu us (microseconds) \n", (stop.tv_sec - start.tv_sec) * 1000000 + stop.tv_usec - start.tv_usec); 
    //printArray(arr, arr_size); 
    
    
    /*QUICKSORT*/
    
    *arr = randArray(arr);
    //printf("\nGiven array is \n");
    //printArray(arr, arr_size);
    
    gettimeofday(&start, NULL);
    
    quickSort(arr, 0, arr_size-1); 
    
    gettimeofday(&stop, NULL);
    
    printf("\nSorted array by quickSort in: %lu us (microseconds) \n", (stop.tv_sec - start.tv_sec) * 1000000 + stop.tv_usec - start.tv_usec); 
    //printArray(arr, arr_size); 
    
    
    /*INSERTIONSORT*/
    
    *arr = randArray(arr);
    //printf("\nGiven array is \n");
    //printArray(arr, arr_size);
     
    gettimeofday(&start, NULL);
    
    insertionSort(arr, arr_size); 
    
    gettimeofday(&stop, NULL);
    
    printf("\nSorted array by insertionSort in: %lu us (microseconds) \n", (stop.tv_sec - start.tv_sec) * 1000000 + stop.tv_usec - start.tv_usec); 
    //printArray(arr, arr_size); 
    
    
    /*SELECTIONSORT*/
    *arr = randArray(arr);
    //printf("\nGiven array is \n");
    //printArray(arr, arr_size);
     
    gettimeofday(&start, NULL);
    
    selectionSort(arr, arr_size); 
    
    gettimeofday(&stop, NULL);
    
    printf("\nSorted array by selectionSort in: %lu us (microseconds) \n", (stop.tv_sec - start.tv_sec) * 1000000 + stop.tv_usec - start.tv_usec); 
    //printArray(arr, arr_size);
    
    
    /*BUBBLESORT*/
    *arr = randArray(arr);
    //printf("\nGiven array is \n");
    //printArray(arr, arr_size);
     
    gettimeofday(&start, NULL);
    
    bubbleSort(arr, arr_size); 
    
    gettimeofday(&stop, NULL);
    
    printf("\nSorted array by bubbleSort in: %lu us (microseconds) \n", (stop.tv_sec - start.tv_sec) * 1000000 + stop.tv_usec - start.tv_usec); 
    //printArray(arr, arr_size);
    
    return 0; 
} 
