#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vector1,vector2;
    vector1.push_back(10);
    vector1.push_back(20);
    cout<<"SIZE OF VECTOR1 IS ="<<vector1.size()<<endl;
    cout<<"Elements in vector1 array :"<<endl;
    for(int i=0;i<vector1.size();i++)
    cout<<vector1.at(i)<<endl;
    for(int i=0;i<2;i++){
        int item=0;
        cout<<"enter elements for VECTOR2"<<endl;
        cin>>item;
        vector2.push_back(item);
    }

    cout<<"SIZE OF VECTOR2 IS ="<<vector2.size()<<endl;
    cout<<"Elements in vector2 array :"<<endl;
    for(int i=0;i<vector2.size();i++)
    cout<<vector2.at(i)<<endl;

    cout<<"ADDING VECTOR2 ELEMENTS INTO VECTOR1";
    for(int i=0;i<vector2.size();i++){
        vector1.push_back(vector2.at(i));
    }

    cout<<"NOW Elements in vector1 array :"<<endl;
    for(int i=0;i<vector1.size();i++)
    cout<<vector1.at(i)<<endl;
    return 0;
}