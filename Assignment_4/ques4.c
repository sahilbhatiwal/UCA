/*
 * Given an array of integers heights representing the histogram's bar height where the width of each bar is 1,
 * return the area of the    largest rectangle in the histogram.
   Input: heights = [2,1,5,6,2,3]
   Output: 10 
 * @Sahil Bhatiwal, (1910990683)
*/

#include<stdlib.h>

struct stack{

    int size;
    int top;
    int *arr;
};

struct stack * create(int n)
{
    struct stack *s = (struct stack*)malloc(sizeof(struct stack));
    s->size =n;
    s->top =-1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    return s;
}

int isEmpty(struct stack *ptr)
{
    if(ptr->top == -1)
      return 1;
    else
      return 0;
}

int isFull(struct stack *ptr)
{
   if(ptr->top == ptr->size-1)
   return 1;
   else
   return 0;
}

void push(struct stack *ptr,int ele)
{
    if(isFull(ptr))
    {
        printf("stack overflow");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top]=ele;
    }
}

int pop(struct stack *ptr)
{
    if(isEmpty(ptr))
    {
        printf("stack underflow");
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int peek(struct stack *ptr)
{
    return ptr->arr[ptr->top];
}

int largestRectangleArea(int* arr, int n)
{

     struct stack *s = create(n);

      // right boundary

     int *r = (int *)malloc(sizeof(int)*n);
     push(s,n-1);
     r[n-1]=n;

     for(int i=n-2;i>=0;i--)
     {
        while( s->top>=0 && arr[i]<=arr[peek(s)])
        {
           pop(s);
        }
        if(s->top == -1)
        {
           r[i]=n;
        }
        else
        {
           r[i]=peek(s);
        }
         push(s,i);
     }

     //left boundary
    while(s->top != -1)
     {
         pop(s);
     }

     int *l = (int *)malloc(sizeof(int)*n);
     push(s,0);
     l[0]=-1;

     for(int i=1;i<n;i++)
     {
        while( s->top>=0 && arr[i]<=arr[peek(s)])
        {
           pop(s);
        }
        if(s->top == -1)
        {
           l[i]=-1;
        }
        else
        {
           l[i]=peek(s);
        }
         push(s,i);
     }

     //max area

     int max=0;
        for(int i=0;i<n;i++)
        {
           int width = r[i]-l[i]-1;
           int area = arr[i] * width;
           if(area > max)
           {
              max = area;
           }
        }
        return max;
}
