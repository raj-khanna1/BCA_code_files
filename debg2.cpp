#include<iostream>
using namespace std;
#define pi 3.14
int squarearea(int &);
int circlearea(int &);
int main(){
    int a=10;
    cout<<squarearea(a)<<" ";
    cout<<circlearea(a)<<" ";
}
int squarearea(int &num){
    return num*==num;// should have assignment operator insted of comparision.
}
int circlearea(int &r){
    return r=pi*r*r;
}