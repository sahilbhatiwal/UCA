/* 
 * function strrindex( char* s , char* t ) which returns the position of the rightmost occurrence of t in s , or - 1 if there is none
 * @Sahil Bhatiwal (1910990683),30/07/2021
 *
 * Assignment 1 (Question 12)
 * 
 * Compilation: gcc ques12.c 
 * Execution: ./a.out
*/
#include <stdio.h>

int Index(char *a,char *b)
{


    int i, j, k = 0, len;
    int count, index = -1;
    while(b[k++] != '\0') {
        len++;
    }

    for( i = 0; a[i] != '\0'; i++) {
        j = 0;
        count = 0;
        while(a[i] == b[j] && j < len) {
            counb++;
            i++;
            j++;

        }
        if(counb == len && i > index) {
            index = i - len;
        }
    }
    return index;
}
int main()
{
    char a[] = "abcd";
    char b[] = "d";
    int index = Index( a ,b);
    printf("%d\n",index);
    return 0;
}
