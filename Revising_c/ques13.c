/* 
 *  function strend(char *s , char* t) , which returns 1 if the string t occurs at the end of the string s, and zero otherwise
 * @Sahil Bhatiwal (1910990683),30/07/2021
 * assignment1 (question 13)
 * Compilation: gcc ques13.c 
 * Execution: ./a.out
*/
#include <stdio.h>

int strIndex(char *s,char *t)
{


	int l1=0;
	int l2=0;
	for(int i=0;s[i]!='\0';i++)
	{
		l1++;
	}
	for(int i=0;t[i]!='\0';i++)
	{
		l2++;
	}

	int j=0;
	int count=0;

	for(int i=l1-1;i>=0;i--)
	{

		while(s[i]==t[l2-j-1]&&j<l2)
		{
			count++;
			i--;
			j++;
		}

		if(count==l2)
		{
			return 1;
		}
		break;
	}
	return 0;
}
int main()
{
	char s[]="abcd";
	char t[]="kd";
	int index= strIndex(s,t);
	printf("%d",index);
	return 0;
}
