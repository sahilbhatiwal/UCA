/*
 * Program to find bitwise AND without using &.
 *
 * @Sahil Bhatiwal  (1910990683)
 *
 * Assignment 3 (Bits and Bytes)
 *
 * Question number -> 01
 */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int bitAND(int a, int b)
{
    return ~((~a) | (~b));
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", bitAND(x, y));
    return 0;
}
