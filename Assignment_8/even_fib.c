/* Program to printf n even fibonacci numbers.
 *
 * Compilation even_fib.c
 * Execution ./a.out
 *
 * @Sahil Bhatiwal (1910990683)
 * Assignment 8 (Algorithms)
 *
 */
#include <stdio.h>
#include <stdlib.h>
void e_fibo(int n, int sum1, int sum2, int sum)
{
    if(n <= 2) {
        return;
    }
    printf("%d ", sum);
    sum1 = sum2;
    sum2 = sum;
    e_fibo(n - 1, sum1, sum2, 4 * sum2 + sum1);
}

int main()
{
    int n;
    printf("Enter number of even fibonacci:");
    scanf("%d", &n);
    int sum1 = 2, sum2 = 8, sum = sum1 + 4 * sum2;
    if(n >= 1) {
        printf("2 ");
    }
    if(n >= 2) {
        printf("8 ");
    }
    e_fibo(n, sum1, sum2, sum);
    return 0;
}
