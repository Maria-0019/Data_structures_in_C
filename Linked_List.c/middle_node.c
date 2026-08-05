#include <stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node *next;
};

struct Node *find_middle(struct Node *head) {
    struct Node *slow=head, *fast=head;

    while(fast !=NULL && fast->next !=NULL)  {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

  
int main()
{   
   
    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;
    struct Node *forth=NULL;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    forth=(struct Node *)malloc(sizeof(struct Node));
   
    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    forth->data=40;
    forth->next=NULL;

head= find_middle(head);
 printf("%d",head->data);
 
return 0;
}
