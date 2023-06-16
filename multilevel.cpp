//MULTILEVEL INHERITANCE
#include<iostream>
using namespace std;
class Grand_base_class{
    protected:
    int a;
    public:
    Grand_base_class(){
        a=5;
    }
    void show_data(){
        cout<<"Hello from Grand Parent Class"<<endl;
        cout<<"Value of a Through Grand BASE CLASS "<<a<<endl;
    }
};

//PARENT CLASS
class Parent:public Grand_base_class{
    public:
    void show_data_of_Base_Class(){
        cout<<"Namaste from Parent Class "<<a<<endl;
    }
};
//CHILD CLASS
class Child:public Parent{
    public:
    void show(){
        cout<<"Value of a Through child CLASS "<<a<<endl;
    }
};
int main(){
    Child obj1;
    obj1.show_data();
    obj1.show_data_of_Base_Class();
    obj1.show();
    return 0;
}