//Destructor in c++
#include<iostream>
using namespace std;
class Myclass{
    public:
    int var1;
    int var2;
    Myclass(){
        cout<<"Constructor is called"<<endl;
    }
    ~Myclass(){
        cout<<"When compiler reach to the end of object's block then Destructor is called"<<endl;
    }

};
int main(){
    Myclass obj1;
    obj1.var1=10;
    obj1.var2=20;
    int j;
    cout<<"Now enter the j's value"<<endl;
    cin>>j;

    return 0;
}