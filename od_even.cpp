// ODD EVEN PROGRAM
#include<iostream>
using namespace std;
class Number{
    int num;
    public:
    void getdata(){
        cout<<"Enter the Number: ";
        cin>>num;
    }
    void putdata();
};
void Number :: putdata(){
    if(num%2==0)
    cout<<num<<" is Even"<<endl;
    else 
    cout<<num<<" is ODD";
}
int main(){
    Number num1;
    num1.getdata();
    num1.putdata();
}