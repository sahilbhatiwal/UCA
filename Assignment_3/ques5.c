/* Program to right shift the num by n times;
 *
 *@Sahil Bhatiwal (1910990683)
 *
 *Assignment 3 (Bits and Bytes)
 *
 *Question 5
 *
 */
#include <stdio.h>
#include <stdlib.h>

int logical_shift(int num, int n)
{
    return (unsigned int) num >> n;   
}

int main()
{
    int num = 0x87654321;
    printf("Enter the number of bits:");
    int bits;
    scanf("%d", &bits);
    if(bits < 4 || bits > 32)
        printf("Invalid bits\n");
    printf("0x%lx\n", logical_shift(num, bits));
    
    return 0;
}
