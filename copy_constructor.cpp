//Copy Constructor in Deep...
#include<iostream>
using namespace std;
class Myclass{
    int a,b;
    public:
    int c=2;
    Myclass(){
        cout<<"Deafault Constructor"<<endl;
    }
    Myclass(int num1,int num2){
        a=num1;
        b=num2;
        cout<<"Parametrized Constructor"<<endl;
    }
    Myclass(Myclass &obj){ // CAN initiate a infine loop is refernce is not used bcoz again and again copy constructor will be called to copy
        cout<<"Copy Constructor"<<endl;
    }
    ~Myclass(){
        cout<<"Destructor is called"<<endl;
    }

};
void fun(Myclass obj){
    cout<<"Function is Called"<<endl;
    cout<<obj.c<<endl;
}
int main(){
    Myclass obj;
    Myclass obj2;
    fun(obj);
    Myclass obj3(obj2);
}
