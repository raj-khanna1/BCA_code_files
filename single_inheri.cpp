//SINGLE INHERITANCE
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
//CHILD CLASS
class Child:public Base{
    public:
    void show_data_of_Base_Class(){
        cout<<"Value of a Through CHILD CLASS "<<a<<endl;
    }
};
int main(){
    Child obj1;
    obj1.show_data();
    obj1.show_data_of_Base_Class();
    return 0;
}