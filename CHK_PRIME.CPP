// Program for checking whether a number is Prime or not.
#include<iostream>
using namespace std;
class Number{
    int num;
    public:
    void getdata();
    void putdata();
};
void Number ::getdata(){
    cout<<"Enter the Respective Number :";
    cin>>num;
}
void Number ::putdata(){
    int flag=0;
    for(int i=2; i<=num/2;i++){
        if(num%i==0)
        flag=1;
    }
    if(flag==1)
    cout<<num<<" is Not a PRIME NUMBER";
    else
    cout<<num<<" is a PRIME NUMBER";
}
int main(){
    Number num1;
    num1.getdata();
    num1.putdata();
}