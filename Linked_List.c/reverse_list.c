#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data ;
    struct Node *next;

};

struct Node *reverse_List(struct Node *head)  {
       struct Node *prev=NULL, *current=head, *next;

       while(current!=NULL)  {
         next=current->next;
         current->next=prev;
         prev=current;
         current=next;
       }
    head=prev;
    return head;
}
 void print_List(struct Node *head)  {
     struct Node *temp=head;
    while(temp!=NULL)  {
        printf(" %d ->", temp->data);
           temp=temp->next;
    }
        printf("NULL\n");
  }


   struct  Node *create_newNode(int data)  {
      struct Node *newNode;
       newNode= (struct Node*)malloc(sizeof(struct Node));
       newNode->data=data;
       newNode->next=NULL;

       return newNode;
   }

   
  int main()  {
         struct Node *head, *first, *second , *third;
         head=create_newNode(10);
         first=create_newNode(20);
         second=create_newNode(30);
         third=create_newNode(40);

         head->next=first;
         first->next=second;
         second->next=third;
         third->next=NULL;

   head=reverse_List(head);
   print_List(head);  
   return 0;   
  }
