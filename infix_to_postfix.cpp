#include<iostream>
using namespace std;
#define SIZE 50
char stack[SIZE];
int top=-1;
string postfix;

void push_exp(char item){
    
        if(item=='>'){
        while(stack[top]=='>')
        postfix.push_back(stack[top--]);
    }
    stack[++top]=item;  

}
void push_star(char item){
    if(item=='*' || item=='/'){
         while(stack[top]=='>' ||stack[top]=='*' || stack[top]=='/')
        postfix.push_back(stack[top--]);
    }
    stack[++top]=item;

}
void push_add_sub(char item){
    if(item=='*' || item=='/' || item=='+' || item=='-' || item=='>'){
         while(stack[top]=='>' ||stack[top]=='*' || stack[top]=='/' || stack[top]=='+' || stack[top]=='-')
        postfix.push_back(stack[top--]);
    }
    stack[++top]=item;

}
int main(){
    string infix="a+b*-d+e-f*g/h";
    for(int i=0;i<infix.length();i++){
        if(infix[i]=='+'  || infix[i]=='-')
            push_add_sub(infix[i]);
        
        else if(infix[i]=='*'  || infix[i]=='/' )
        push_star(infix[i]);

        else if(infix[i]=='>')
            push_exp(infix[i]);

        else
        postfix.push_back(infix[i]);
        
    }
    while(top!=-1)
    postfix.push_back(stack[top--]);
    cout<<"CONVERSION OF "<<infix<<" TO POSTFIX IS "<<endl<<"\t\t\t\t\t\t"<<postfix;
}