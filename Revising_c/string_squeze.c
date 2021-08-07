/*
 * Program that deletes each character in s1 that matches any character in the s2.
 *
 * Compilation: squeze_string.c
 * Exicution: ./a.out
 *
 * @Sahil Bhatiwal (1910990683), 31/07/2021
 * Assignment_1 (Question 10)
 *
 */
#include <stdio.h>
void squeeze(char *s1, char *s2)
{
    int len1 = 0, len2 = 0;
    int i = 0, j = 0;
    while(s1[i] != '\0') {
        len1++;
        i++;
    }
    while(s2[j] != '\0') {
        len2++;
        j++;
    }
    int k;
    for(i = 0; i < len2; i++) {
        k = 0;

        for(j = 0; j < len1; j++) {
            if(s1[j] != s2[i]) {
                s1[k++] = s1[j];
            }
        }
        s1[k] = '\0';
    }
    printf("%s\n",s1);

}


int main() {
    char s1[] = "abcd";
    char s2[] = "bc";
    squeeze(s1,s2);
}

