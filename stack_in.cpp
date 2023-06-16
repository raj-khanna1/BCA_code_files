#include<iostream>
#define size 5
using namespace std;

class Stack_class{
        int top;
       int stack[size]; 

    public:
    Stack_class(){
        top=-1;
    }
    void push(int item){
        top==size-1?printf("OVERFLOW.."):(stack[++top]=item);    
    }
    void pop(){
        top==-1?printf("UNDERFLOW.."):top--;
    }
    void display(){
        if(top==-1)
        cout<<"STACK IS EMPTY"<<endl;
        else{
            for(int i=top;i>=0;i--)
            cout<<stack[i]<<endl;
        }
    }
    void peek(){
        if(top==-1)
        cout<<"stack is empty"<<endl;
        else
        cout<<"PEEK ELEMENT IS :"<<stack[top];
    }
};
int main(){
    Stack_class obj1;
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
            obj1.push(item);
            break;

            case 2:
            obj1.pop();
            break;
            case 3:
            obj1.display();
            break;
            case 4:
            obj1.peek();
            break;
            default:
            printf("Wrong CHOICE");
        }

    }while(choice>0 && choice<=4);
    return 0;
}