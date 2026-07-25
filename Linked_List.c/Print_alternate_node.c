#inlcude<stdio.h>
#include<stdlib.h>
struct Node {
  int data;
  struct *next;
};

void alternate_node(struct Node*head) {
  int i=1;
 while ( head!=NULL) {
      if( i%2==1) 
printf("%d", head->data);
c++;
head= head->next;
return 0;
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

 alternate_node(head);
return 0;
}
