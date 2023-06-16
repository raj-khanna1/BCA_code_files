#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int a=10,b=3;
    int &ref=a;
    // cout<<"adrs of a : "<<&a<<endl;
    // cout<<"adrs of ref : "<<&ref<<endl;
    // cout<<"Value of a : "<<a<<endl;
    // cout<<"Value of ref : "<<ref<<endl;
    //swap function using easy refernce concept. 
    swap(a,b);
    cout<<"AFTER SWAP FUNCTION IS CALLED"<<endl;
    cout<<"a = "<<a<<"\nb = "<<b<<endl;
    return 0;
}