#include<iostream>
using namespace std;
// PATTERN
// ********
// *******
// ******
// *****
// ****
// ***
// **
// *
int main(){
    int row;
    cout<<"Enter rows"<<endl;
    cin>>row;
    for(int i=row;i>=0;i--)
    {
        for(int j=0;j<=i;j++)
        cout<<"*";
        cout<<endl;
    }
    return 0;
}