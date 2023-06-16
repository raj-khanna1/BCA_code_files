// ARRAY STACK PROGRAM IN C. 
#include<stdio.h>
#define size 5              //DEFINING size
int stack[size];
int top=-1;
// Function for Inserting elements in STACK.
void push(int item){
    top==size-1?printf("| OVERFLOW.. |\n"):(stack[++top]=item);
}
// Function for Deleting elements from STACK.
void pop(){
    top==-1?printf("| UNDERFLOW.. |\n"):top--;
}
// Function for Displaying elements of STACK.
void display(){
    if(top==-1)
    printf("STAC IS EMPTY\n");
    else{
        printf("STACK ELEMENTS ARE :\n\n");
        for(int i=top;i>=0;i--)
        printf("| %d |\n",stack[i]);
        printf("\n");
    }
}
// Function for Displaying PEEK Element of STACK.
void peek(){
    if(top==-1)
    printf("STAC IS EMPTY");
    else{
        printf("PEEK ELEMENT OF STACK IS : %d\n",stack[top]);
    }
}
// MAIN FUNCTION
int main(){
    int choice,item;
    do{
        printf("\nEnter the Choice :\n");
        printf("1.PUSH\n2.POP\n3.DISPLAY\n4.peek\n5.EXIT\t");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("Enter the Element : ");
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
            printf("<----------You Entered Wrong Choice.---------->");
        }
    }while(choice!=5);
    return 0;
}