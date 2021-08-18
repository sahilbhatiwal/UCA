/*
 * Program to find bang without !.
 *
 * @Sahil Bhatiwal (1910990683)
 *
 * Assignment 3 (Bits and Bytes) 
 *
 * Question 7
 *
 */
#include <stdio.h>

int invert(int x)
{
    int invx = ~x; 
    int opp = invx + 1; 
    return (( ~opp & invx) >> 31) & 1; 
}

int main()
{
    int x;
    printf("Enter the number:\n");
    scanf("%d", &x);
    
    printf("!%d = %d\n",x, invert(x));
    return 0;
}
