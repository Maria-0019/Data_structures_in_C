#include<stdio.h>
#define MAX 5

int front = -1, rare = -1;
int arr[MAX];

void enqueue( int val){
    if(front==-1 && rare==-1) {
        front=0;
        rare=0;
        arr[rare]=val;
        return ;
    }
    if(rare==MAX-1) {
        printf("overflow Condition");
        return;
    }
    rare++;
    arr[rare]=val;
    
}



void display() {
    if(front==-1 && rare==-1) {
        printf("queue is empty");
        return;
    }
    for(int i=front; i<=rare; i++) {
        printf("%d->", arr[i]);
        
    }
}
void dequeue(void)
{
    if (front == -1 && rare == -1) {
        printf("underflow condition\n");
        return;
    }

    printf("\npopped element = %d\n", arr[front]);

    if (front == rare) {
        front = rare = -1;
    } else {
        front++;
    }
 }


int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    display();
    dequeue();
    display();
return 0;
}
