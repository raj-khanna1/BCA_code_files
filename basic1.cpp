#include<iostream>
using namespace std;

namespace raj{
    void print(string txt){
        cout<<txt<<endl;
    }
}
using namespace raj;
//class

int main(){
    //std::cout<<"hello";// ::->Stands for Scope Resolution Operator.
    print("ram");
    return 0;
}