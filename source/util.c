#include "util.h"

void printArray(int A[], int size) { 
    int i; 
    
    printf("\nArray:\n");
    
    for (i=0; i < size; i++) 
        printf("%d ", A[i]); 
    printf("\n"); 
}

int randArray(int arr[], int size){
	int i, n;
    time_t t;
    
    srand((unsigned) time(&t));
    for(i = 0; i < size; i++)
       arr[i] = rand() % 100000;
       
    return *arr;
}
