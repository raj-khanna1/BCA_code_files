#include<iostream>
using namespace std;
int main(){
    int var=10;
    int &refer=var;
    int *ptr=&var;
    cout<<"Normal variable :"<<var<<endl;
    cout<<"adrs of Normal variable :"<<&var<<endl;

    cout<<"var's Refernce variable :"<<refer<<endl;
    cout<<"Adrs of Refernce variable :"<<&refer<<endl;
    
    cout<<"Pointer variable :"<<*ptr<<endl; 
    cout<<"adrs of Pointer variable :"<<&ptr<<endl;
    return 0;
}
