/*
 * Program to implement basic operations on queue 
 * Compilation: queue_program.c
 * Exicution: ./a.out
 *
 * @Sahil Bhatiwal (1910990683) , 2- 08- 2021
 * Assignment: Day2_coding_Assignment (Question 2)
 * 
 *
 */
#include<stdio.h>
int arr[10];
int head;
int tail;
int size;
//enqueue(insertion ) function
void enqueue() {
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(head>-1) {
        arr[++tail] = n;
    }
    else {
        arr[++head] = n;
	tail++;
    }
    printf("%d enqueueed to the array at head %d tail %d\n",n,head,tail);
}
//dequeue(deletion) function
void dequeue() {
     if(head<=tail) {
	head++;
        printf("value dequeueed from head %d tail %d\n",head,tail);
     }
}
//peek function which prints the value at tail
void peek() {
    if(head<=tail) {
        printf("%d\n",arr[tail]);
    }
}
//is_empty function checks if the array is empty or not
void is_empty() {
    if(head == -1 || head>tail){
	printf("Queue is empty\n");
    }
    else {
        printf("Queue is not empty\n");
    }
}
//is_full function checks if the array is full or not
int main() {
    int querry = 0;
    head = -1;
    tail = -1;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    while(querry != 6)
    {
    printf("\n\nEnter:\n1 enqueue\n2 dequeue\n3 peek\n4 Is empty\n5 Print complexity for each\n6 Exit\n Enter the querry:");
	scanf("%d",&querry);
	printf("\n\n");
	if( querry == 1) {
	     if(tail < size-1) {
	    	enqueue();
	     }
	     else {
		printf("QueueOverflow\n");
	     }
	}
	else if( querry == 2) {
	    if(tail > -1 && (head<=tail)) {
	        dequeue();
	    }
	    else {
		printf("QueueUnderflow\n");
	    }
	}
	else if( querry == 3) {
	    peek();
	}
	else if( querry == 4) {
	    is_empty();
	}
	else if( querry == 5) {
	    printf("Complexity for enqueue  = O(1)\n");
	    printf("Complexity for dequeue  = O(1)\n");
	    printf("Complexity for peek     = O(1)\n");
	    printf("Complexity for is_empty = O(1)\n\n");
	}
	else if( querry == 6){
	    printf("Exit command exicuted\n");
	}
	else {
	    printf("Please enter a valid querry");
	}
    }
    return 0;    
}
