/*
 * Program to perform bubble sort on 3 different type of inputs to calculate the time taken to perform the sorting 
 *
 *
 *
 */
#include<stdio.h>
#include<sys/time.h>
#include<stdlib.h>

void swap(int a[], int i, int j) {
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

void bubble_sort (int a[], int ctr) {
    int i = 0, j;
    int flag = 0;
    for (i = 0; i<  ctr -1; i++){
	    flag = 0;
	    for (j = 0; j < ctr-i-1; j++) {
                if (a[j] > a[j+1]){
		    swap(a,j,j+1);
		    flag = 1;
		}
	    }
		if(!flag){
		break;
		}
	}    
}

void generate_random_input ( int initial_size, int incriment) {
    struct timeval te;
    int i;

    for (i = 0; i < 8; i++) {
        int s = initial_size + incriment * i;
	int a[s];
	for(int x = 0; x < s; x++){
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
int main ( ) {
    int initial_size = 8000;
    int incriment = 4000;
    generate_random_input( initial_size, incriment );
    printf("\n");
    generate_sorted_input( initial_size, incriment );
    printf("\n");
    generate_reverse_sorted_input( initial_size, incriment );
    printf("\n");
}
