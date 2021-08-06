/*
 * Program for selection sort using recursion.
 * 
 * Compilation: selection_sort.c
 * Exicution: ./a.out
 * @Sahil Bhatiwal (1910990683) , 05/08/2021
 *
 * Assignment_5-Recursion (Question 1) 
 *
 */
#include <stdio.h>

//recursive sort function.
void sort(int start, int next, int arr[], int size){
//for checking if the number of elements is greater than 1
    if(start < size - 1){
        if(start == next){
            next = start + 1;
        }
        if(next < size){
            if(arr[start] > arr[next]){
                int temp = arr[start];
                arr[start] = arr[next];
                arr[next] = temp;
            }
//increasing next for checking next minimum index.
        sort(start, next + 1, arr, size);
        }
        sort(start + 1, next, arr, size);
    }
    return ;
}

//This prints the given array.
void print(int arr[], int size){
    for(int index = 0; index < size; index++)
        printf("%d ", arr[index]);
    printf("\n");
}

int main()
{
//initialising array.
    int array[5] = {5, 2, 3, 4, 1};
//Calling sort function.
    sort(0, 0, array, 5);
//Print data.
    print(array, 5);
    return 0;
}

