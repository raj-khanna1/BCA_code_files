//HIERACHIAL INHERITANCE
#include<iostream>
using namespace std;
class Base{
    protected:
    int a;
    public:
    Base(){
        a=5;
    }
    void show_data(){
        cout<<"Value of a Through BASE CLASS "<<a<<endl;
    }
};
//CHILD1 CLASS
class Child1:public Base{
    public:
    void show_data_of_Base_Class(){
        cout<<"Value of a Through CHILD "<<a<<endl;
    }
    void show(){
        cout<<"Hello from child1 Class"<<endl;
    }
};

//CHILD2 CLASS
class Child2:public Base{
    public:
    void show_data_of_Base_Class(){
        cout<<"Value of a Through CHILD2 "<<a<<endl;
    }
    void display(){
        cout<<"Namaste from child2 Class"<<endl;
    }
};
int main(){
    Child1 obj1;
    obj1.show();
    obj1.show_data_of_Base_Class();
    Child2 obj2;
    obj2.display();
    obj2.show_data_of_Base_Class();
    return 0;
}