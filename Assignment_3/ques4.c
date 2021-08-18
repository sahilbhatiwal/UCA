/* Program to find the nth byte in a number..
 *
 * @Sahil Bhatiwal (1910990683)
 *
 * Assignment 3 (Bits And Bytes)
 *
 * Question 4
 *
 *
 */
#include <stdio.h>
#include <stdlib.h>

int getByte(int num, int n)
{
    return num >> (n << 3) & 0xFF;
}

int main()
{
    int num = 0x12345678;
    int byte;
    printf("Enter the byte number:");
    scanf("%d", &byte);
    if(byte > 3 || byte < 0)
        printf("Invalid byte!!\n");
    printf("0x%x\n", getByte(num, byte));
    return 0;
}
