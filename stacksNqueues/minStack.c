/*
 * Muskan,1910990665
  
* Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.
  
Input:
["MinStack","push","push","push","getMin","pop","top","getMin"]
[[],[-2],[0],[-3],[],[],[],[]]

Output:
[null,null,null,null,-3,null,0,-2]

Explanation:
MinStack minStack = new MinStack();
minStack.push(-2);
minStack.push(0);
minStack.push(-3);
minStack.getMin(); // return -3
minStack.pop();
minStack.top();    // return 0
minStack.getMin(); // return -2

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

/**
 * Your MinStack struct will be instantiated and called as such:
 * MinStack* obj = minStackCreate();
 * minStackPush(obj, val);
 
 * minStackPop(obj);
 
 * int param_3 = minStackTop(obj);
 
 * int param_4 = minStackGetMin(obj);
 
 * minStackFree(obj);
*/
