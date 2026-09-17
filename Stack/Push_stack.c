#include<stdio.h>
#define Max 5

int arr[Max];
int top=-1;

//PUSH()
void push(int val) {
    if(top==Max-1) {
        printf("overflow condition");
        return;
    }
    top++;
    arr[top]=val;
}
