/*
 * Program to perform insertion sort on 3 different type of inputs (Random, sorted, reversly sorted) to calculate the time
   taken to perform the insertion sort. 
 * Compilation: gcc insertion_sort.c
 * Exicution: ./a.out
 * @Sahil Bhatiwal (1910990683), 29-07-2021
 * Assignment3: insertion sort run time analysis
 * 
 */
#include<stdio.h>
#include<sys/time.h>
#include<stdlib.h>
// This is main insertion sorting function
void insertion_sort(int arr[], int size) {
    for(int index = 1; index < size; index++) {
	int new_index = index;
        int new_element = arr[index];
	    
	//for finding the correct position in the sorted array
	while(new_index > 0 && arr[new_index - 1] > new_element) {
	    arr[new_index] = arr[new_index - 1];
	    new_index--;
	}
	
	//placing the new value to at the right position.
	arr[new_index] = new_element;
    }
}

/* This function takes to arguments initial_size and incriment which helps us to declare the length of array a[] genrates
   random values using rand() function in array a[] and prints the total time taken by insertion sort to sort an array which 
   contains rendom input
 * te is an object of class timeval 
 * timeval an inbuilt function included in sys/time.h library
 * gettimeofday is an inbulit function in structure timeval
 * start: it is long long type variable which stores the time just before calling of insertion_sort function 
 * end: it is a long long type variable which stores the time after completion of sorting using insertion_sort function 
 * The difference between start and end provides us the total time taken to perform the sorting
 * Both start and end stores time in milli secounds
 * We can also conclude that this function prints the average case time complexity of insertion sorting algorithm
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
    insertion_sort(a, s);
    gettimeofday(&te, NULL);
    long long end = te.tv_sec * 1000LL + te.tv_usec / 1000;
    printf("Time taken when array had random values %11lld\n",end - start);
    }
}

// This function inserts a sorted array to a[] and prints the time taken by insertion sort when the input array is sorted
// We can also say that this function prints the best case time complexity of insertion sorting algorithm

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
        insertion_sort(a, s);
        gettimeofday(&te, NULL);
        long long end = te.tv_sec * 1000LL + te.tv_usec / 1000;
        printf("Time taken when array had sorted values %11lld\n",end - start);
    }
}

/* This function inserts a reversly sorted array to a[] and prints the time taken by insertion sort to sort the array when
   the input array is reversly sorted
 * Or we can say that this function prints the worst case time complexity of insertion sorting algorithm
*/

void generate_reverse_sorted_input ( int initial_size, int incriment) {
    struct timeval te;
    int i;

    for (i = 0; i < 8; i++) {
        int s = initial_size + incriment * i;
        int a[s];
        for(int x = 0; x < s; x++) {
	    a[x] = s - x - 1;
	}
        gettimeofday(&te, NULL);
	long long start = te.tv_sec * 1000LL + te.tv_usec / 1000;
	insertion_sort(a, s);
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
