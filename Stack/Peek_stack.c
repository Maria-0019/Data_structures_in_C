#define Max 5

int arr[Max];
int top=-1;

int peek() {
    if(top==-1) {
        printf("stack is empty" );
        return -1;     
    }
    return arr[top];
}
void display() {
    if(top==-1) {
        printf("stack is empty");
        return ;
   }
    for(int i=top; i>=0; i--) {
        printf(" %d", arr[i]);
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    display();
    
    printf("\nidentify last inserted= %d", peek());
    
}
