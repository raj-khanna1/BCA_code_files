// Default constructor Practise..
#include<iostream>
using namespace std;
class Myclass{
    int a,b;
    string name;
    public:
    Myclass(){
        a=10;
        b=12;
        name="raj";
        cout<<"Value of a is "<<a<<" and b= "<<b<<endl;
        cout<<"Name is "<<name;
    }
};
int main(){
    Myclass obj;
}