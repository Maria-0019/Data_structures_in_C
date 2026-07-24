#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node*next;

};

// Function Call
int LastNode(struct Node*head)  {
   
    if (head==NULL) {
      printf("Linked List is empty");
      return;
     }

    while (head->next!=NULL)    {
        head=head->next; 
    }
    return head->data;
   
}

int main()  {
    struct Node*head=NULL;
    struct Node*second=NULL;
    struct Node*third=NULL;

    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third= (struct Node*)malloc(sizeof(struct Node));

  // Assign data + Linking

    head->data=10;
    head->next=second;

    second->data=20;
    second->next=third;

    third->data=30;
    third->next=NULL;

   printf("Last node data=%d\n", LastNode(head)); 
    return 0;
}
