#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node*next;
};

# Function Call
int countNodes(struct node*head)
{
    int count=0;
    struct node* temp=head;

    while(temp!=NULL)
    {
     count++;
     temp=temp->next;
    }
    return count;
}
int main() {

    struct node*head=NULL;
    struct node*second=NULL;
    struct node*third=NULL;

  //Memory Allocation
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));

  // Assign data and linking
    head->data=10;
    head->next=second;

    second->data=20;
    second->next=third;

    third->data=30;
    third->next=NULL;

    printf("Totol Nodes=%d", countNodes(head));
    return 0;
}
