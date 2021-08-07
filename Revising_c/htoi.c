/*
 * Program to convert hexadecimal to integer(htoi implementation).
 * 
 * Compilation: htoi.c
 * Exicution: ./a.out
 *
 * @Sahil Bhatiwal (1910990683) , 29/07/2021
 *
 * Assignment_1 (Question 9) 
 *
 */
#include <stdio.h>

int htoi(char *s) {

    int sum = 0;
    int hex;
    int i = 0;

    if(s[i] == '0') {
        ++i;
        if(s[i] == 'x' || s[i] == 'X') {
            ++i;
        }
    }
    while(s[i] != '\0') {
        if(s[i] >= '0' && s[i] <= '9') {
            hex = s[i] - '0';
        }
        else if(s[i] >= 'a' && s[i] <= 'f') {
            hex = s[i] - 'a' + 10;

        }
        else if(s[i] >= 'A' && s[i] <= 'F') { 
            hex=s[i] - 'A' + 10;
        }
        else {
            break;
        }

        sum = sum * 16 + hex;
        i++;
    }
    return sum;
}
int main() {
    char a[] = "0XA";
    int v = htoi(a);
    printf("%d\n",v);

    return 0;
}
