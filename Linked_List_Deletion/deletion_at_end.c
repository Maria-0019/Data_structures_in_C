#include<stdio.h>
#include<stdlib.h>

 struct Node {
    int data;
    struct Node *next;
  };

struct Node *delete_end(struct Node *head) {
    
    // Empty List
    if(head==NULL) 
        return NULL;
    
   // Only one node
   if(head->next==NULL){
        free(head);
        return NULL;
   }
   struct Node *temp=head;
   
   // go to the second last node
   while(temp->next->next !=NULL) {
       temp=temp->next;
   }
   free(temp->next);
   temp->next=NULL;
   return head;
}
    // Print linked list
    void print_List(struct Node *head)  {
     struct Node *temp=head;
    while(temp!=NULL)  {
        printf(" %d ->", temp->data);
           temp=temp->next;
    }
        printf("NULL\n");
  }

int main()
{   
   
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

    
 head = delete_end(head);
  print_List(head);
return 0;
}
