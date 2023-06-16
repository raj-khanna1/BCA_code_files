//Queue Implementation in C
#include<stdio.h>
#define SIZE 10
int queue[SIZE];
int front=-1,rear=-1;
void enqueue(int item){
    if(rear==SIZE-1)
    printf("OVERFLOW...\n");
    else if(front==-1 && rear==-1){
        front=0;
        rear=0;
        queue[rear]=item;
    }
    else
    queue[++rear]=item;
}
void dequeue(){
    if(front==-1 && rear==-1)
    printf("UNDERFLOW...\n");
    else if(front==rear)
    {   
        printf("Deleted item is : %d",queue[front]);
        front=-1;
        rear=-1;
    }
    else{
         printf("Deleted item is : %d",queue[front]);
           ++front;
    }
  
}
void display(){
    if(front ==-1 && rear==-1)
    printf("Queue is Empty\n");
    else {
        for(int i=front; i<=rear;i++)
        printf("| %d |",queue[i]);
    }
}
void peek(){
    if(front==-1 && rear==-1)
    printf("Queue is Empty\n");
    else
    printf("\n%d ",queue[front]);
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