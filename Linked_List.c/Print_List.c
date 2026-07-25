#include<stdio.h>
#include<stdlib.h>

struct Node {
   int data;
   struct Node*next;
};

int print_list (struct Node *head) {
    int arr[3];
   int i=0;
  while(head!=NULL) {
     arr[i]=head->data;
     i++;
     head=head->next;  }
   for (int j=0; j<i; j++) {
    printf(" %d ", arr[j]);
   }
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

 print_list(head);
return 0;
}
