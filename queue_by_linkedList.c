#include <stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* front = NULL;
struct Node* rear = NULL;

struct Node* createNode(int val) {
    struct Node* newNode = malloc(sizeof(struct Node));
    if (newNode == NULL) {
        return NULL;
    }

    newNode->data = val;
    newNode->next = NULL;
    return newNode;
}

// ENQUEUE()
void enqueue(int val) {
    struct Node* newNode = createNode(val);
    if (newNode == NULL) {
        return;
    }

    if (rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
}

// DEQUEUE()
void dequeue(void) {
    if (front == NULL) {
        printf("Underflow condition\n");
        return;
    }

    struct Node* temp = front;
    printf("Dequeued: %d\n", temp->data);
    front = front->next;

    if (front == NULL) {
        rear = NULL;
    }

    free(temp);
}

// DISPLAY()
void display(void) {
    struct Node* temp = front;

    while (temp != NULL) {
        printf("%d->", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    display();
}







