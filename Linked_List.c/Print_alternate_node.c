#include<stdio.h>
#include<stdlib.h>
struct Node {
  int data;
  struct Node *next;
};

void alternate_node(struct Node*head) {
  int i=1;
  while ( head!=NULL) {

      if( i%2==1) 
       printf(" %d ", head->data);
       i++;
       head= head->next;

    }
}

int main()
{
    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;
    struct Node *forth= NULL;
    struct Node *fifth= NULL;
     
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    forth=(struct Node *)malloc(sizeof(struct Node));
    fifth=(struct Node *)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = forth;
    
    forth->data= 40;
    forth->next=fifth;
    
    fifth->data=50;
    fifth->next=NULL;

 alternate_node(head);
return 0;
}
