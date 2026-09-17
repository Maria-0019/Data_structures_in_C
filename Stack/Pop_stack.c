#include<stdio.h>
#define Max 5

int arr[Max];
int top=-1;


int pop() {
    if(top==-1) {
        printf("underflow condition");
         return -1;    
    }
    int val=arr[top];
    top--;
    return val;
}
