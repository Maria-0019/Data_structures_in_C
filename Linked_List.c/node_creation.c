#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node*next;
};
 struct Node *CreateNode(int data) {

      struct Node *head = (struct Node*)malloc(sizeof(struct Node));
      head -> data = data;
      head ->next = NULL;
 

    return head;
 }

int main() {

  struct Node*head= CreateNode(10);

  if(head!=NULL)  {
    printf("Node created with data:\n%d", head->data);
  }
  return 0;
  }
