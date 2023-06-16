// METHOD OVERRIDING...
#include<iostream>
using namespace std;
class A{
    protected:
    int roll;
    public:
    int num;
    A(){
        num=12;
        roll=3420;
    }
    void display(){
        cout<<"value of roll is :"<<roll<<endl<<"value of num is : "<<num<<endl;
    }
};
class B:public A{
    public:
    int num;
    B(){
        num=122;
           }
    void display(){
        cout<<"value of roll is :"<<roll<<endl<<"value of num is : "<<num<<endl;
    }
};
int main(){
    B obj;
    obj.display();
    obj.A::display();
    // cout<<"A's roll is "<<obj.roll<<endl;
    return 0;

}
