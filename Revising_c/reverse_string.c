/*
 * Program to reverse the given string.
 *
 * @Sahil Bhatiwal (1910990683), 03/08/2021
 *
 * Assignment_1 (Question 8)
 *
 */
#include <stdio.h>

void reverse(char* str){

    //counting size of the string.
    int size = 0;
    while(*(str + size) != '\0'){
        size++;
    }

    //start and end are two indices for reversing.
    int start = 0, end = size - 1;

    //function for reversing the given string.
    while(start <= end){
        char temp = *(str + start);
        *(str + start) = *(str + end);
        *(str + end) = temp;
        start++;
        end--;
    }
}
        

int main()
{
    int size;

    printf("Enter the size of the string: ");
    scanf("%d", &size);

    //Enter the String.
    char str[size];
    printf("Enter string: ");
    scanf(" %[^\n]%*c", str);

    //Calling reverse function
    reverse(str);

    //print the string
    printf("%s\n", str);
    return 0;
}
