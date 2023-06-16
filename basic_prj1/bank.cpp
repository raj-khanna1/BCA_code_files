#include<iostream>
#include"bank.h"
using namespace std;
void Bank::getdata(){
    cout<<"Account balance :"<<endl;
    cin>>balance;
    cout<<"account no."<<endl;
    cin>>acc_no;
}
void Bank::display_data(){
    cout<<"Balance = "<<balance<<endl;
    cout<<"Acc no = "<<acc_no<<endl;
}