//hybrid Inheritance
#include<iostream>
using namespace std;
class A{
    protected:
    int a_var;
    public:
    void display(){
        cout<<"Hello from Base A"<<endl;
    }
};
class B{
    protected:
    int b_var;
    public:
    void display(){
        cout<<"Hello from Base B"<<endl;
    }
};
class C:public A,public B{
    protected:
    int c_var;
    public:
    void show(){
        cout<<"Namaste from Derived Class C"<<endl;
    }
};
class D:public C{
    protected:
    int d_var;
    public:
    void bolo(){
        cout<<"Boolo ... from Base B"<<endl;
    }
};
class E:public C{
    protected:
    int e_var;
    public:
    void display_all(){
        C::show();
        C::A::display();
        C::B::display();
        
    }
};
int main(){
    D d_obj;
    d_obj.bolo();
    d_obj.show();
    d_obj.A::display();
    d_obj.B::display();
    E obj;
    obj.show();
    obj.display_all();
    return 0;
}