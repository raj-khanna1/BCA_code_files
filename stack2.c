#include<stdio.h>
#define SIZE 5
int stack[SIZE];
int top=-1;
void push(int item){
    top==SIZE-1?printf("OVERFLOW.."):(stack[++top]=item);
}
void pop(){
    top==-1?printf("UNDERFLOW.."):top--;
}
void display(){
    if(top==-1)
    printf("STACK IS EMPTY\n");
    for(int i=top;i>=0;i--)
    printf("|%d|\n",stack[i]);
}
void peek(){
        if(top==-1)
    printf("STACK IS EMPTY\n");
    else{
        printf("PEEK ELEMENT :%d",stack[top]);
    }
}
int main(){
    int item;
    int choice;
    do{
        printf("Enter Your Choice..\n");
        printf("1. PUSH \n 2. POP\n3. Display() 4. PEEK()\n");
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