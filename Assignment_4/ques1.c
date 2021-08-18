/* 
 * Program that checks for balancing parentheses
 * @Sahil Bhatiwal (1910990683),10/07/2021
 * Compilation: gcc ques1.c  
 * Execution: ./a.out
 * assignment:4 (Ques1)
 */
#include<stdio.h>
#include<stdbool.h>
#define MAX 1000
char st[MAX];
int top = -1;

void push (char x);
char pop ();
void push (char x) {
    if (top >= (MAX - 1)) {
        printf ("stack overflow");
    }
    else {
        st[++top] = x;
    }
}
char peek () {
    return st[top];
}
char pop () {
    if (top < 0) {
        printf ("stack is Empty");
    }
    else{
        char x = st[top--];
        return x;
    }
}
bool isEmpty () {
    return (top < 0);
}
int main () {
    char a[] = "([)]";
    int i = 0;
    bool flag = false;
    int len = sizeof (a) / sizeof (a[0]);
    for (int i = 0; i < len; i++) {
        if (a[i] == '{' || a[i] == '[' || a[i] == '(') {
            push (a[i]);
        }
        else {
            if (!isEmpty ()) {
                flag = true;
                char ch = pop ();
                if (ch == '{' && a[i] == '}') {
                    continue;
                }
                else if (ch == '[' && a[i] == ']') {
                    continue;
                }
                else if (ch == '(' && a[i] == ')') {
                    continue;
                }
                else {
                    flag = false;
                    break;
                }
            }
            else {
                break;
            }
        }
    }
    if (flag == true && isEmpty ()) {
        printf ("True");
    }
    else {
        printf ("False");
    }
}

