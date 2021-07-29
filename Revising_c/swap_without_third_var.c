/* 
 * Swap to numbers without using third variable
 * @Sahil Bhatiwal (1910990683),28/07/2021
 * assignment: C Foundations(question 1)
 */
#include<stdio.h>
int main() {
    int num1 = 0, num2 = 0;
    printf("Enter num1: ");
    scanf("%d",&num1);
    printf("Enter num2: ");
    scanf("%d",&num2);
    num1 += num2;
    num2 = num1 - num2;
    num1 -= num2;
    printf("num1 = %d \nnum2 = %d\n", num1, num2);

    return 1;
}
