#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node*next;
};

int SecLastNode(struct Node*head)
  {
    if(head==NULL|| head->next==NULL) {
    printf("Second Last node is not exist\n.");
    return -1;
    }
    
    while (head->next->next!=NULL)  {
        head=head->next;
    }
     return head->data;
    
}
  

  int main()  {
      
    struct Node*head=NULL;
    struct Node*second=NULL;
    struct Node*third=NULL;
    struct Node*forth=NULL;

    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    forth=(struct Node*)malloc(sizeof(struct Node));

    head->data=10;
    head->next=second;

    second->data=50;
    second->next=third;

    third->data=30;
    third->next=forth;

    forth->data=80;
    forth->next=NULL;

    printf("Second Last Node data=%d\n", SecLastNode(head));

    return 0;
  }
