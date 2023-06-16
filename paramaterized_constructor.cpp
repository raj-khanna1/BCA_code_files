// Paramaterized Constructor
#include<iostream>
using namespace std;
class Myclass{
    public:
    Myclass(){}
        Myclass(int a,int b){
        cout<<"Value of a = "<<a<<endl;
        cout<<"Value of b = "<<b<<endl;
    }
};
int main(){
    Myclass obj1(2,5);
    Myclass obj2;
    return 0;
}