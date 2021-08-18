/*
 * Program to find XOR of two numbers without using XOR operator.
 *
 * @Sahil Bhatiwal (1910990683)
 *
 * Assignment 3 (Bits and Bytes) 
 *
 * Question number -> 02
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int bitXOR (int a, int b)
{
    return ( (~(~a & ~b)) & ~(~(~a) & ~(~b) ) );
}

int main()
{
    int x, y;
    printf("Enter two number:\n");
    scanf("%d %d", &x, &y);
    printf("%d ^ %d = %d\n",x, y, bitXOR(x, y));
    return 0;
}
