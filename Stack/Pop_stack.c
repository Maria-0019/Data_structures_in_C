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
void display() {
    if(top==-1) {
        printf("stack is empty");
        return ;
   }
    for(int i=top; i>=0; i--) {
        printf(" %d", arr[i]);
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
printf("\npopped elemnt= %d", pop());
    display();
}
