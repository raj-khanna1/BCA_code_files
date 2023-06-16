#include<iostream>
using namespace std;

class Myclass{
    int a;
    public:
    Myclass(){
        a=5;
        cout<<"Default Constructor called"<<endl;
    }
    Myclass(int var){
        a=var;
        cout<<"Parametrized Constructor Called"<<endl;
    }
    Myclass(Myclass &obj){
        a=obj.a;
        cout<<"Copy Constructor Called"<<endl;
    }
    ~Myclass(){
        cout<<"Destructor is called"<<endl;
    }
    void display(){
        cout<<"a = "<<a<<endl;
    }
};
int main(){
    Myclass obj;
    obj.display();
    {
        Myclass obj2(12);
        obj2.display();

    }
    Myclass obj3(obj);
    obj3.display();
    return 0;
}