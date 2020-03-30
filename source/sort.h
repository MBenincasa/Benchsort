#include <stdlib.h> 
#include <stdio.h> 
#include <math.h>

#define MAX_SIZE 1000000

/*mergesort*/
void merge(int arr[], int l, int m, int r);
void mergeSort(int arr[], int l, int r);

/*quicksort*/
void swap(int* a, int* b);
int partition (int arr[], int low, int high);
void quickSort(int arr[], int low, int high);

/*insertionsort*/
void insertionSort(int arr[], int n);

/*selectionsort*/
void swapS(int *xp, int *yp);
void selectionSort(int arr[], int n);

/*bubblesort*/
void swapB(int *xp, int *yp);
void bubbleSort(int arr[], int n);

/*main*/
void printArray(int A[], int size);
