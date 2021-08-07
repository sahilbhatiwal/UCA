/* 
 *  program to print all input lines that are longer than 80 characters
 *
 *  @Sahil Bhatiwal (1910990683),30/07/2021
 *  Assignment 1 (Question 7)
 *  Compilation: gcc ques7.c 
 *  Execution: ./a.out
 */
#include <stdio.h>

int main()
{
    int len, limit = 80, maxLimit = 1000;
    char c[maxLimit];
    int j, i;
    for(i = 0; i < (maxLimit - 1 && (j = getchar()) != EOF && j != '\n'); i++) {
        c[i] = j;
    }
    if(j == '\n') {
        c[i] = j;
        i++;
    }
    c[i] = '\0';
    if(i > limit) {
        printf("%s\n",c);
    }
}
