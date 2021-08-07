/* 
 * To check if a string is palindrome or not while considering only alphabatic char and ignoring cases
 * @Sahil Bhatiwal (1910990683),28/07/2021
 * assignment: C Foundations(question 6)
 */
#include<stdio.h>
#include<string.h>
int main() {
    int i = 0, j = 0, flag = 0;
    char str[100], str1[100];
    scanf("%[^\n]%*c",str1);
    i = 0;
    int len = 0;
    while( str1[i] != '\0') {
        if((str1[i] >= 'a' && str1[i] <= 'z') || (str1[i] >= 'A' && str1[i] <= 'Z')) {
	    if(str1[i] >= 'a' && str1[i] <= 'z') {
	    str[j++] = str1[i];
	    }
	    if(str1[i] >= 'A' && str1[i] <= 'Z') {
		str[j++] = str1[i] + 32;
	    }
	}
	    i++;
    }
    len = j;
    str[j] = '\0';
    i = 0;
    j = len - 1;
    for(i = 0; i <= j / 2; i++) {
	if( str[i] == str[j - i]) {
		flag = 1;
	}
	else {
	    flag = 0;
	    break;
	}
    }
    if(flag == 1) {
	printf("True\n");
    }
    if(flag == 0) {
	printf("False\n");
    }
    return 1;
}
