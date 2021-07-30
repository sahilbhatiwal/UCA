/* 
 * Find number of vovals and consonants in the given string 
 * @Sahil Bhatiwal (1910990683),28/07/2021
 * assignment: C Foundations(question 3)
 */
#include<stdio.h>
int main() {
    char str[100];
    int vowel = 0, total_alpha = 0, i = 0;
    printf("Enter the string: ");
    scanf("%[^\n]%*c",str);  // Here ^\n tells %c to take input till \n character is not found
    while(str[i] != '\0'){
        if(str[i] == 'a' || str[i] == 'e' ||  str[i] == 'i' ||  str[i] == 'o' ||  str[i] == 'u') {
	    vowel++;	
	}
	if(str[i] == 'A' ||  str[i] == 'E' ||  str[i] == 'I' ||  str[i] == 'O' ||  str[i] == 'U' ) {
	    vowel++;
	}
	total_alpha++;
	i++;
    }
    printf("Vowels = %d , Consonents = %d\n",vowel,(total_alpha - vowel));
    return 1;
}
