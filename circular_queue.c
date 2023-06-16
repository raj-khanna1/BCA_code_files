//Circular Queue in c
#include<stdio.h>
#define SIZE 10
int c_queue[SIZE];
int front=-1;
int rear=-1;
void enqueue(int item){
    if((rear+1)%SIZE==front)
    printf("OVERFLOW...");
    else if(front==-1 && rear==-1){
        front=0;
        rear=0;
        c_queue[rear]=item;
    }
    else{
        rear=(rear+1)%SIZE;
        c_queue[rear]=item;
    }
}
void dequeue(){
    if(front==-1 && rear==-1)
    printf("underflow");
    else if(front ==rear){
        printf("deleted item is %d\n",c_queue[front]);
        front=-1;
        rear=-1;
    }
    else{
        printf("deleted item is %d\n",c_queue[front]);
        front=(front+1)%SIZE;
    }
}
void display(){
    int i;
        if(front==-1 && rear==-1)
    printf("CIRCULAR QUEUE IS EMPTY");
    else{
        for(i=front; i!=rear; i=(i+1)%SIZE)
        printf("%d ",c_queue[i]);
        printf("%d",c_queue[i]);
    }
}
void peek(){
            if(front==-1 && rear==-1)
    printf("CIRCULAR QUEUE IS EMPTY");
    else
    printf("PEEK ELEMENT : %d",c_queue[front]);
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