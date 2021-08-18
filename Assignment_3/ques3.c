/*
 * Program to find the sign of the give number.
 *
 * @Sahil Bhatiwal (1910990683)
 *
 * Assignment 2 (Bits And Bytes) 
 *
 * Question number -> 03
 */
#include <stdio.h>

int sign(int x){
    return (x >> 31) | (!!x);
}

int main()
{
    int x;
    printf("Enter the number:\n");
    scanf("%d", &x);
    printf("Sign of %d is: %d\n",x, sign(x));

    return 0;
}
