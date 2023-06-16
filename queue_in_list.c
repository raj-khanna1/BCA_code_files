#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node*front =NULL;
struct node*rear =NULL;
void enqueue(int item){
    struct node*newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=item;
    newNode->next=NULL;
    if(front==NULL && rear==NULL){
        front=newNode;
        rear=newNode;
    }
    else{
        rear->next=newNode;
        rear=newNode;
    }
}
void dequeue(){
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    temp=front;
    if(front==NULL&& rear==NULL){
        printf("UNDERFLOW..");
    }
    else if(front==rear){
        printf("Deleted item: %d",temp->data);
        printf("\nkhatam");
        front=NULL;
        rear=NULL;
    }
    else{
        printf("Deleted item: %d",temp->data);
        front=front->next;
    }
}
void display(){
    struct node*temp=front;
    if(front==NULL&& rear==NULL){
        printf("Queue is Empty..");
    }
    else{
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
}
void peek(){
    if(front==NULL&& rear==NULL){
        printf("Queue is Empty..");
    }
    else
    printf("PEEK ELEMENT : %d",front->data);
}
int main(){
    int item;
    int choice;
    do{
        printf("\nEnter your Choice.. \n");
        printf("1.Enqueue \n2.Dequeue \n3.Display()\n4.Peek");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("Enter Element ");
            scanf("%d",&item);
            enqueue(item);
            break;
            case 2:
            dequeue();
            break;
            case 3:
            display();
            break;
            case 4:
            peek();
            break;
            default:
            printf("You Entered Wrong Choice!!");

        }
    }while(choice>=1 && choice<=4);
    return 0;
}