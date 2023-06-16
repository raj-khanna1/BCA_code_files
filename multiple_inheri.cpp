//Multiple INHERITANCE
#include<iostream>
using namespace std;
class Base1{
    protected:
    int a;
    public:
    Base1(){
        a=5;
    }
    void show_data(){
        cout<<"Value of a Through BASE1 CLASS "<<a<<endl;
    }
};
class Base2{
    protected:
    int b;
    public:
    Base2(){
        b=9;
    }
    void show_data(){
        cout<<"Value of a Through BASE2 CLASS "<<b<<endl;
    }
};
//CHILD CLASS
class Child:public Base1,public Base2{
    public:
    void show_data_of_Base_Class(){
        cout<<"Value of a Through CHILD CLASS "<<a<<endl;
        cout<<"Value of b Through CHILD CLASS "<<b<<endl;
    }
};
int main(){
    Child obj1;
    obj1.Base1::show_data();
    obj1.Base2::show_data();
    obj1.show_data_of_Base_Class();
    return 0;
}