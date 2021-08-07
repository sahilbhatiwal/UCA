/* 
 * program that evaluates reverse Polish expression
 *
 * @Sahil Bhatiwal (1910990683), 4/07/2021
 * Compilation: gcc ques15.c
 * Execution: ./a.out
 * Assignment 1 (question 15)
 */

#include <stdio.h>
#define SIZE 40

char postfix[SIZE];
int st[SIZE], top = -1;

void push(int n) {
    if (top < SIZE -1) {
        st[++top] = n;
    }
    else {
        printf("Stack is full!\n");

    }
}
int pop() {    
    int n;
    if (top > -1) {
        n = st[top];
        st[top--] = -1;
        return n;
    }
    else {
        printf("Stack is empty!\n");

    }
}    


int main() {
    int i, a, b, result, val;
    char ch;

    for(i=0; i<SIZE; i++) {
        st[i] = -1;
    }
    printf("\nEnter a postfix expression: ");
    scanf("%s",postfix);

    for(i=0; postfix[i] != '\0'; i++) {
        ch = postfix[i];

        if(ch>='0'&&ch<='9') {
            push(ch-'0');
        }
        else if(ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            b = pop();
            a = pop();

            switch(ch) {
                case '+':
		      result = a+b;
                      break;
                case '-': 
		      result = a-b;
                      break;
                case '*': 
		      result = a*b;
                      break;
                case '/': 
		      result = a/b;
                      break;
            }
            
	    push(result);
        }        

    }

    val = pop();

    printf("The postfix evaluation is:%d\n",val);

    return 0;
}
