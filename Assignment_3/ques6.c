/*
 * Program to implement conditional statement without using ?
 *
 * @Sahil Bhatiwal (1910990683)
 *
 * Assignment 3 (Bits and Bytes) 
 *
 * Question 6
 *
 */
#include <stdio.h>
int conditional(int x, int y, int z)
{
    int zero_or_not = !(!x);
    int bits = ~zero_or_not + 1;
    return (bits & y) | (~(bits) & z);
}

int main()
{
    int x, y, z;
    printf("Enter three numbers:\n");
    scanf("%d %d %d", &x, &y, &z);
    int ans = conditional(x, y, z);
    printf("%d ? %d : %d = %d\n",x, y, z, ans);
    return 0;
}
