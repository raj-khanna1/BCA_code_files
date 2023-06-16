#include<iostream>
using namespace std;
// PATTERN
// *    
// **   
// ***  
// **** 
// *****
int main(){
    int row;
    cout<<"Enter rows"<<endl;
    cin>>row;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<=i;j++)
        cout<<"*";
        cout<<endl;
    }
    return 0;
}