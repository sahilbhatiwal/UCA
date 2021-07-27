/*
 * Program to perform bubble sort on 3 different type of inputs (Random, sorted, reversly sorted) to calculate the time
   taken to perform the bubble sort. 
 * Compilation: gcc bubble_sort.c
 * Exicution: ./a.out
 * @Sahil Bhatiwal (1910990683), 27-07-2021
 * Assignment: Bubble sort run time analysis
 * 
 */
#include<stdio.h>
#include<sys/time.h>
#include<stdlib.h>
// This function swaps the values at index i and j
void swap(int a[], int i, int j) {
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}
// This is main bubble sorting function 
void bubble_sort (int a[], int ctr) {
    int i = 0, j;
    int flag = 0; 		//flag is used to stop loop if array is sorted before complete iteration of for loop
    for (i = 0; i<  ctr -1; i++) {	
        flag = 0;
	    for (j = 0; j < ctr-i-1; j++) {
                if (a[j] > a[j+1]) {
                    swap(a,j,j+1);
		    flag = 1;
		}
	    }
        if( !flag ) {		// If no swap function then it exits i loop
	    break;
	}
    }    
}
/* This function takes to arguments initial_size and incriment which helps us to declare the length of array a[] genrates
   random values using rand() function in array a[] and prints the total time taken by bubble sort to sort an array which 
   contains rendom input
 * te is an object of class timeval 
 * timeval an inbuilt function included in sys/time.h library
 * gettimeofday is an inbulit function in structure timeval
 * start: it is long long type variable which stores the time just before calling of bubble_sort function 
 * end: it is a long long type variable which stores the time after completion of sorting using bubble_sort function 
 * The difference between start and end provides us the total time taken to perform the sorting
 * Both start and end stores time in milli secounds
 * We can also conclude that this function prints the average case time complexity of bubble sorting algorithm
*/

void generate_random_input ( int initial_size, int incriment) {
    struct timeval te;
    int i;

    for (i = 0; i < 8; i++) {
        int s = initial_size + incriment * i;
	int a[s];
        for(int x = 0; x < s; x++) {
	    a[x] = rand();
	}

    gettimeofday(&te, NULL);
    long long start = te.tv_sec * 1000LL + te.tv_usec / 1000;
    bubble_sort(a, s);
    gettimeofday(&te, NULL);
    long long end = te.tv_sec * 1000LL + te.tv_usec / 1000;
    printf("Time taken when array had random values %11lld\n",end - start);
    }
}

// This function inserts a sorted array to a[] and prints the time taken by bubble sort when the input array is sorted
// We can also say that this function prints the best case time complexity of bubble sorting algorithm

void generate_sorted_input ( int initial_size, int incriment) {
    struct timeval te;
    int i;
     
    for (i = 0; i < 8; i++) {
        int s = initial_size + incriment * i;
        int a[s];
	for(int x = 0; x < s; x++){
	    a[x] = x;
	}
        gettimeofday(&te, NULL);
        long long start = te.tv_sec * 1000LL + te.tv_usec / 1000;
        bubble_sort(a, s);
        gettimeofday(&te, NULL);
        long long end = te.tv_sec * 1000LL + te.tv_usec / 1000;
        printf("Time taken when array had sorted values %11lld\n",end - start);
    }
}

/* This function inserts a reversly sorted array to a[] and prints the time taken by bubble sort to sort the array when
   the input array is reversly sorted
 * Or we can say that this function prints the worst case time complexity of bubble sorting algorithm
*/

void generate_reverse_sorted_input ( int initial_size, int incriment) {
    struct timeval te;
    int i;

    for (i = 0; i < 8; i++) {
        int s = initial_size + incriment * i;
        int a[s];
        for(int x = 0; x < s; x++) {
	    a[x] = s - x;
	}
        gettimeofday(&te, NULL);
	long long start = te.tv_sec * 1000LL + te.tv_usec / 1000;
	bubble_sort(a, s);
	gettimeofday(&te, NULL);
	long long end = te.tv_sec * 1000LL + te.tv_usec / 1000;
	printf("Time taken when array had reversely sorted values %11lld\n",end - start);
    }
}
//main function
int main ( ) {
    int initial_size = 8000;
    int incriment = 4000;
    //calls a function which inputs rendom values to array,Also calculates the time taken to sort the array.
    generate_random_input( initial_size, incriment );
    printf("\n");
    //calls a function which inputs sorted values to array,Also calculates the time taken to sort the array.
    generate_sorted_input( initial_size, incriment );
    printf("\n");
    //calls a function which inputs reversely sorted values to array,Also calculates the time taken to sort the array.
    generate_reverse_sorted_input( initial_size, incriment );
    printf("\n");
}
