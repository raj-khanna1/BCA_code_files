// SIMPLE QUEUE PROGRAM IN C
#include<stdio.h>
#define size 10
int queue[size];
int front=-1;
int rear=-1;

//FUNCTION FOR INSERTING ELEMENTS IN QUEUE
void Enqueue(int item){
    if(rear==size-1)
    printf("OVERFLOW...\n");
    else if(front==-1 && rear ==-1){
        front=0;
        rear=0;
        queue[rear]=item;
    }
    else{
        queue[++rear]=item;
    }
}
// FUNCTION FOR DELETING ELEMENTS FROM QUEUE
void Dequeue(){
    if(front==-1)
    printf("UNDERFLOW..\n");
    else if(front==rear)
    {
        printf("Deleted Element is : %d\n",queue[front]);
        front=-1;
        rear=-1;
    }
    else{
    printf("Deleted Element is : %d\n",queue[front]);
    front++;
    }
}
// DISPLAY FUNCTION
void Display(){
    if(front==-1)
    printf("QUEUE IS EMPTY..\n");
    else{
        for(int i=front;i<=rear;i++)
        printf("| %d |",queue[i]);
        printf("\n");
    }
}
//DEFEING PEEK FUNCTION
void peek(){
    if(front==-1)
    printf("QUEUE IS EMPTY..\n");
    else{
        printf("PEEK ELEMENT OF QUEUE IS : %d\n",queue[front]);
    }
}
//MAIN FUNCTION
int main(){
    int item;
    int choice;
    do{
        printf("\nEnter your Choice.. \n");
        printf("1.Enqueue \n2.Dequeue \n3.Display()\n4.Peek\n5.Exit\t");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("Enter Element \t");
            scanf("%d",&item);
            Enqueue(item);
            break;
            case 2:
            Dequeue();
            break;
            case 3:
            Display();
            break;
            case 4:
            peek();
            break;
            case 5:
            printf("\n#### EXITED ####");
            break;
            default:
            printf("<--------You Entered Wrong Choice!!--------->");
        }
    }while(choice!=5);
    return 0;
}