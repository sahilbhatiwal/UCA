/*
 * Program to find GCD of two number using recursion.
 *
 * Compilation: gcc gcd.c
 * Exicution: ./a.out
 *
 * @Sahil Bhatiwal (1910990683) , 05/08/2021
 *
 * Assignment_5-Recursion (Question 2)
 */
#include <stdio.h>

//recursive function gcd.
int gcd(int n, int m)
{
//if remainder becomes zero then we return quotient stored.
    if(m == 0)
        return n;
//else we divide two numbers and find quotient and remainder respectively.
    return gcd(n / m, n % m);
}

int main()
{
    int n, m;
//Takes input from the user as n and m
    printf("Enter two numbers\n");
    scanf("%d %d", &n, &m);
//assigning large number first and smaller as second for ease of calculation
int max = n > m ? n : m;
int min = n + m - max;
//passing both numbers to a function
   int ans = gcd(max, min);
//printing ans
    printf("Gcd of %d and %d is: %d\n", n, m, ans);
    return 0;
}

