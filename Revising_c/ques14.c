/* 
 * Implementation of library function strncmp,strncat,strncpy
 *
 * @Sahil Bhatiwal (1910990683),5/07/2021
 * Assignment 1 (question 14)
 * 
 * Compilation: gcc ques14.c 
 * Execution: ./a.out
 *
 */

#include <stdio.h>
#include <string.h>
void strncatf(char *s,char *t,int n) { //function that appends the string t at the end of string s upto n characters long

    int i = 0, j = 0, l = 0;
    while(s[i++] != '\0') {
        l++;
    }

    for(i = l; i < l + n; i++) {
        s[i] = t[j];
        j++;
    }
    s[i] = '\0';
    printf("%s\n",s);

}
void strncpya(char *des,char *src,int size) { //function that copies upto given size from src string to destination string.
    int i;
    for(i = 0; i < size && src[i] != '\0'; i++)
    {
        des[i] = src[i];
    }
    des[i] = '\0';
    printf("string destination = %s\n",des);
}

int strncmpf(char *a,char *b,int n) {//function which compares two string are equal or not
    
	int count = 0;
    
    for(int i = 0; i < n; i++) {
        if(a[i] == b[i]) {
            count++;
            continue;
        }
        int x = (int)a[i];
        int y = (int)b[i];
        if(x > y) {
            return 1;//if a is greater than b 
        }
        return -1;//if b is greater than a
    }
    
    if(count == n) {
        return 0;//if both are equal
    }
}



int main()
{
    char s[] = "abcd";
    char t[] = "kd";

    strncatf(s,t,2);
    printf("\n");
    
    char src[4] = "abcd";
    char des[10];

    strncpya(des,src,10);
    
    char a[] = "abcdef";
    char b[] = "ABCDEF";
    int res = strncmpf(a,b,4);
    
    if(res > 0) {
        printf("A\n");
    }
    else if(res < 0) {
        printf("B\n");
    }
    else {
        printf("Equal\n");
    }
     
    return 0;
}
