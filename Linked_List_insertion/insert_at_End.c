#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;                                        

};

struct Node* insert_end(struct Node *head, int key)  {
    struct Node *newNode;
    newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode ->data = key;
    newNode -> next = NULL;

    // Empty List
    if(head==NULL) 
       return newNode;

//Traverse till last node
struct Node*temp= head;
  while(temp->next!=NULL) {
    temp=temp->next;
   
  }
  temp->next=newNode;
  return head;
}
void display(struct Node* head) {
    struct Node* temp = head;
    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

 int main() {
 
    int key=8;
    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

 head =insert_end(head,key);
display(head);
 
return 0;
}
  
