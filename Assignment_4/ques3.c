/*
 * Program to implement stack using queue
 * @Sahil Bhatiwal (1910990683)
 */
#include<stdlib.h>


struct queue {

    int rear, front;
    int size;
    int *a;

}*q;

/** Initialize your data structure here. */


struct queue *create(int n) {
    struct queue*q = (struct queue*)malloc(sizeof(struct queue));

    q->front = -1;
    q->rear = -1;
    q->size = n;
    q->a = (int*)malloc(n*sizeof(int));

    return q;
}

void enqueue(int x, struct queue *q) {

    if(q->front == (q->rear + 1) % q->size) {
        printf("Full\n");
    }
    else {
        //empty
        if(q->rear== -1 && q->front == -1) {
            q->rear=0;
            q->front=0;
            q->a[q->rear] = x;
        }
        else {
        q->rear = (q->rear + 1) % q->size;
        q->a[q->rear] = x;
        }
    }
}

int dequeue (struct queue *q) {

    int t=-1;
    //empty
    if(q->front == -1 && q->rear == -1) {
         printf("empty\n");
    }

  else  if(q->front==q->rear) {
       // last value

        t=q->a[q->front];
        q->front = -1;
        q->rear = -1;

    }
    else {
         t = q->a[q->front];
        q->a[q->front] = -1;

        q->front = (q->front + 1) % q->size;
    }

    return t;
}

int is_empty(struct queue *q) {
    if(q->front == -1 && q->rear == -1) {
        return 1;
    }
    else {
        return 0;
    }

}

typedef struct {

} MyStack;


MyStack* myStackCreate() {
    q=create(101);
    return 0;
}

/** Push element x onto stack. */
void myStackPush(MyStack* obj, int x) {
   enqueue(x,q);
}
/** Removes the element on top of the stack and returns that element. */
int myStackPop(MyStack* obj) {
    int a[101];
    int c=0;
    while(q->front!=q->rear) {
        a[c++]=dequeue(q);
    }
    a[c]=dequeue(q);
  int  t=a[c];
    int i=0;
    while(i!=c) {
        enqueue(a[i],q);
        i++;
    }

    return t;
}

/** Get the top element. */
int myStackTop(MyStack* obj) {
  int ele = myStackPop(0);
    enqueue(ele,q);
    return ele;
}

/** Returns whether the stack is empty. */
bool myStackEmpty(MyStack* obj) {
    return is_empty(q);
}

void myStackFree(MyStack* obj) {
	
}
