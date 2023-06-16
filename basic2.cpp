// Use of Class and Objects
#include<iostream>
using namespace std;
//Class
class Human{
    public:
    string name;
    string color;
    char gender;
    int height;
};
int main(){
    Human object;
    cout<<"enter name"<<endl;
    cin>>object.name;
    cout<<"enter color"<<endl;
    cin>>object.color;
    cout<<"enter gender"<<endl;
    cin>>object.gender;
    cout<<"enter height"<<endl;
    cin>>object.height;
    cout<<"THX FOR THE INFORMATION"<<endl;
    cout<<"DETAILS:"<<endl;

    cout<<"Name :"<<object.name<<endl;
    cout<<"Color :"<<object.color<<endl;
    cout<<"Gender :"<<object.gender<<endl;
    cout<<"Height :"<<object.height<<endl;

    return 0;
}