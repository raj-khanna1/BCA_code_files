#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node *top=NULL;
void push(int item){
    struct node*newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=item;
    newNode->next=top;
    top=newNode;
}
void pop(){
    struct node*temp=top;
    if(top==NULL)
    printf("UNDERFLOW...");
    else{
        printf("poped element is :%d",temp->data);
        top=top->next;
        free(temp);
    }
}
void display(){
    struct node*temp=top;
    if(top==NULL)
    printf("Stack is empty...");
    else{
        while(temp!=NULL){
            printf("|%d|\n",temp->data);
            temp=temp->next;
        }
    }
}
void peek(){
    if(top==NULL)
    printf("Stack is empty...");
    else
    printf("PEEK ELEMENT IS : %d\n",top->data);
}
int main(){
    int item;
    int choice;
    do{
        printf("Enter Your Choice..\n");
        printf("1.PUSH\n2.POP\n3.Display()\n4.PEEK()\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            
            printf("Enter Element..");
            scanf("%d",&item);
            push(item);
            break;

            case 2:
            pop();
            break;
            case 3:
            display();
            break;
            case 4:
            peek();
            break;
            default:
            printf("Wrong CHOICE");
        }

    }while(choice>0 && choice<=4);
    return 0;
}