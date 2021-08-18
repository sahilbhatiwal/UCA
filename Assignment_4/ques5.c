/* 
 * Min stack program
 * @Sahil Bhatiwal (1910990683)
 *
 */
#include<stdlib.h>

typedef struct {

    int arr[30000];
    int min[30000];
    int top;
    int mintop;     

} MinStack;

/** initialize your data structure here. */

MinStack* minStackCreate() 
{
    MinStack *min;
    min=(MinStack*)malloc(sizeof(MinStack));
    min->top=-1;
    min->mintop=-1;
    return min;
}

void minStackPush(MinStack* obj, int val) 
{
    obj->top++;
    obj->arr[obj->top]=val;

    if(obj->mintop==-1 || obj->min[obj->mintop] >= val )  
    {
    	obj->mintop++; 
    	obj->min[obj->mintop]=val;     
    }

}

void minStackPop(MinStack* obj) 
{
    if(obj->top == -1)
    {
    	return;
    }

    int val = obj->arr[obj->top--];

    if(val == obj->min[obj->mintop])
    {
    	obj->mintop--;     
    }
}

int minStackTop(MinStack* obj) 
{
    return obj->arr[obj->top];
}

int minStackGetMin(MinStack* obj) 
{
    return obj->min[obj->mintop];      
}

void minStackFree(MinStack* obj) 
{
    free(obj);
}
