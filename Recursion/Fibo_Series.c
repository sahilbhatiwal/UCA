/*
 * Program to print fiboncci series at every third element using recursion 
 * 
 * Compilation: Fibo_Series.c
 * Exicution: ./a.out
 *
 * Sahil Bhatiwal (1910990683), 05/08/2021
 * Assignment_5-Recursion (Question 4)
 *
 *
 */
#include <stdio.h>

//This is the main function for fibonacci series
int fibo(int n)
{
    //this is the recursion stoping conditional statement
    if(n == 0 || n == 1)
        return n;
    //This return statement is responsible for recursion
    return (fibo(n-1) + fibo(n-2));
}

int main()
{
    //Enter the number of fibbonacci you want to find at every 3rd ocurrence.
    printf("Enter the number of elements to find: ");
    int num;
    scanf("%d", &num);
    
    //This will stop finding fibonacci numbers
    int pos = 1;
    //count will maintain the 3rd occurrence.
    //start will give the starting fibonacci number.
    int start = 1, count = 0;
    // loop for finding the values upto num.
    while(pos <= num)
    {
    //answer will store the fibonacci number at n,
    int ans = fibo(start);
    count++;
    if(count % 3 == 0 && pos == num){
        printf("%d  ", ans);
        pos++;
    }
    else if(count % 3 == 0) {
        printf("%d, ", ans);
        pos++;
    }
    start++;

    }
    printf("\n");
    return 0;
}
