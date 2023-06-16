// Parameterized Constructor...
#include<iostream>
using namespace std;
class Myclass{
    int a,b;
    string name;
    public:
    Myclass(){

    }
    Myclass(int,int,string);
    void showData();
};
Myclass::Myclass(int num1,int num2,string str){
    a=num1;
    b=num2;
    name=str;
}
void Myclass :: showData(){
    cout<<"a is "<<a<<" b is "<<b<<" Name is "<<name;
}
int main(){
    Myclass obj(2,5,"Raja RAJ");
    obj.showData();
    return 0;
}