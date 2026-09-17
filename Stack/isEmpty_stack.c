#include<stdio.h>
#include<stdbool.h>
#define Max 5

int arr[Max];
int top=-1;

void display() {
    if(top==-1) {
        printf("stack is empty");
        return ;
   }
    for(int i=top; i>=0; i--) {
        printf(" %d", arr[i]);
    }
}


bool isEmpty( ) {
    if(top==-1) {
       return true;
    }
    return false;
}


int main() {
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    display();
    
    printf(" \nstack is empty= %d", isEmpty());
}



