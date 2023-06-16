//MY NAMESPACE
#include<iostream>
using namespace std;
namespace raj{
    void printkar(string str){
    cout<<str<<endl;
    }
    void printkar(int str){
    cout<<str<<endl;
    }
}

int main()
{
    string str1="Or Raj Bhai!!!";
    string str2="Kaise ho!!";
    raj::printkar(str1);
    raj::printkar(str2);
    return 0;
}