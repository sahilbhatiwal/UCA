/* 
 * function any( char* s1 , char* s2), which returns the first location in the string1 where any character from the string2 occurs, or
   -1 if s1 contains no characters from s2
 * @Sahil Bhatiwal (1910990683) ,30/07/2021
 * Assignment 1(Question 11)
 * Compilation: gcc ques11.c 
 * Execution: ./a.out
*/
#include <stdio.h>


int pos(char *s1,char *s2)
{
    int k;
    int i = 0, j = 0, len1 = 0, len2 = 0;
    while(s1[i] != '\0') {
        len1++;
        i++;
    }
    while(s2[j] != '\0') {
        len2++;
        j++;
    }
    for(i=0; i < len2; i++) {

        for(j = 0; j < len1; j++) {
            if(s1[j] == s2[i]) {
                return j;
            }
        }
    }
    return -1;
}

int main()
{
    char s1[] = "abcd";
    char s2[] = "a";
    int ans = pos(s1,s2);
    printf("%d\n",ans);

}

