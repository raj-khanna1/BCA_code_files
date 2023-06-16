// COPY OF One object data to another using Copy Constructor
#include<iostream>
using namespace std;
class Myclass{
    public:
    int data;
    int money;
    Myclass(){
        cout<<"hello"<<endl;
    }
    Myclass(Myclass &object){
        data=object.data;
        money=object.money;
    }

};
int main(){
    Myclass obj1;
    obj1.data=20;
    obj1.money=30;
    cout<<"Data of obj1= "<<obj1.data<<endl;
    cout<<"money of obj1= "<<obj1.money<<endl;
    Myclass obj2(obj1);
    cout<<"Data of obj2= "<<obj2.data<<endl;
    cout<<"money of obj2= "<<obj2.money<<endl;
    Myclass obj3;
    obj3=obj1;
    cout<<"Data of obj3= "<<obj3.data<<endl;
    cout<<"money of obj3= "<<obj3.money<<endl;
    return 0;
}