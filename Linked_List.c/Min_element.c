#include<stdio.h>
#include<stdlib.h>
#include <limits.h>

struct Node{
  int data;
  struct Node* next;
  
};

struct Node* createNode(int val) {
  struct Node* newNode= malloc(sizeof(struct Node));
  newNode->data=val;
  newNode->next=NULL;
  return newNode;
}

int minimumElement(struct Node* head) {
  int min=INT_MAX;
  struct Node* temp=head;
  while(temp!=NULL) {
    if(temp->data<min) {
      min=temp->data;
    }
    temp=temp->next;
  }
  return min;
   }


void display (struct Node* head){
  struct Node* temp=head;

  while(temp!=NULL) {
    printf("%d->", temp->data);
    temp=temp->next;
    
  }
  printf("NULL\n");
}
  int main() {
    struct Node* head=createNode(10);
    head->next=createNode(20);
    head->next->next=createNode(30);
    display(head);
    
    printf(" minimum element= %d\n", minimumElement(head));
    
    return 0;
    
}
