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
