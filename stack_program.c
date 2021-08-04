/*
 * Program to implement basic operations on stack 
 * Compilation: stack_program.c
 * Exicution: ./a.out
 *
 * @Sahil Bhatiwal (1910990683) , 2- 08- 2021
 * Assignment: Day2_coding_Assignment (Quesiton 1);
 *
 */
#include<stdio.h>
//push(insertion ) function
void push(int arr[], int *top) {
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    arr[++ (*top)] = n;
    printf("%d pushed to the array\n",n);
}
//pop(deletion) function
void pop(int *top) {
     -- *top;
     printf("value poped\n");
}
//peek function which prints the value at top
void peek(int arr[], int top) {
    printf("%d\n",arr[top]);
}
//is_empty function checks if the array is empty or not
void is_empty(int top) {
    if(top == -1){
	printf("Stack is empty\n");
    }
    else {
        printf("Stack is not empty\n");
    }
}
//is_full function checks if the array is full or not
void is_full(int top,int size) {
    if(top == size - 1) {
        printf("Stack is full\n");
    }
    else {
        printf("Stack is not full\n");
    }
}
int main() {
    int querry = 0, size = 0;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int arr[size];
    int top = -1;
    while(querry != 7)
    {
    printf("\n\nEnter:\n1 push\n2 pop\n3 peek\n4 Is empty\n5 Is full");
    printf("\n6 Print complexity for each program\n7 Exit\n Enter the querry:");
	scanf("%d",&querry);
	printf("\n\n");
	if( querry == 1) {
	     if(top < size-1) {
	    	push(arr, &top);
	     }
	     else {
		printf("StackOverflow\n");
	     }
	}
	else if( querry == 2) {
	    if(top > -1) {
	        pop(&top);
	    }
	    else {
		printf("StackUnderflow\n");
	    }
	}
	else if( querry == 3) {
	    peek(arr, top);
	}
	else if( querry == 4) {
	    is_empty(top);
	}
	else if( querry == 5) {
	    is_full(top, size);
	}
	else if( querry == 6) {
	    printf("Complexity of push     is O(1)\n");
	    printf("Complexity of pop      is O(1)\n");
	    printf("Complexity of peek     is O(1)\n");
	    printf("Complexity of is_empty is O(1)\n");
	    printf("Complexity of is_full  is O(1)\n\n");
	}
	else if( querry == 7) {
	    printf("Exit command exicuted\n");
	}
	else {
	    printf("Please enter a valid querry");
	}
    }
    return 0;    
}
