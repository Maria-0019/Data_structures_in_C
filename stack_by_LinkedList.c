#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};
struct Node* top=NULL;

struct Node* createNode(int val) {
    struct Node* newNode=malloc(sizeof(struct Node));
    newNode->data=val;
    newNode->next=NULL;
    return newNode;
    
}
//PUSH
void push(int val) {
    struct Node* newNode=createNode(val);
    newNode->data=val;
    newNode->next=top;
    top=newNode;
    
}
//POP
int pop() {
    if(top==NULL) {
        printf("underflow condition");
        return -1;
    }
    int val=top->data;
     struct Node*temp=top;
    top=top->next;
    return val;
}
//DISPLAY
void display()
{
    struct Node*temp=top;
    while(temp!=NULL) {
        printf("%d->", temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}


int main(){
    push(10);
    push(20);
    push(30);
    display();
    printf("\npopped element= %d\n", pop());
   display();
    return 0;
}







