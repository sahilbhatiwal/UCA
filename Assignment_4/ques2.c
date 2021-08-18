/*
 * program that converts an arithmetic expression from infix notation to postfix notation.
 * @Sahil Bhatiwal (1910990683)
 *
 */


#include <stdio.h>

int top =-1;

int mystrlen(char *s)
{
    int i=0,c=0;
    while(s[i]!='\0')
    {
        if(s[i]!='(' || s[i]!=')')
        {
            c++;
        }
        i++;
    }
    return c;
}
int isEmpty()
{
  if(top==-1)
      return 1;
  else
    return 0;
}
void push(char *arr,char element)
{
    arr[++top]=element;
}

char pop(char *arr)
{
    return arr[top--];
}

char peek(char *arr)
{
    return arr[top];
}

int prec(char c)
{
   if(c=='+' || c=='-')
   return 1;
   else if(c=='*' || c=='/')
   return 2;
}

void conversion(char *s,char *postfix)
{
     int i=0,j=0;

    char arr[mystrlen(s)];

    while(s[i]!='\0')
    {
        if(s[i]>='0' && s[i]<='9')
        {
          postfix[j++]=s[i];
        }
        else if(s[i] == '(')
        {
            push(arr,s[i]);
        }
        else if(s[i] == ')')
        {
            while(peek(arr)!='(')
            {
                postfix[j++]=pop(arr);

            }
            pop(arr);
        }
        else
        {
            if( isEmpty() || peek(arr)=='(')
            {
                push(arr,s[i]);
            }
            else
            {
              int a=prec(peek(arr));
              int b=prec(s[i]);
              if(a>=b)
              {
                  postfix[j++]=pop(arr);
                  push(arr,s[i]);
              }
              else{
                  push(arr,s[i]);
              }

            }
        }
        i++;
    }
    while(!isEmpty())
    {
   postfix[j++]=pop(arr);
    }
}

int main()
{
    char str[20],i=0;

    printf("Enter String :");

    scanf("%s",str);

    char postfix[mystrlen(str)];

    conversion(str ,postfix);

    printf("postfix expr :%s\n",postfix);
}
