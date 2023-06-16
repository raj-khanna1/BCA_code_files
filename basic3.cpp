//CONSTRUCTOR IN C++
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
class Students{
    public:
    int id;
    string color;
    string name;
    int clas;
    Students(){   
//THIS IS CONSTRUCTOR AND IT IS AUTOMATICALLY CALLED WHEN A OBJECT IS CREATED.
        cout<<"STUDENT CLASS"<<endl;
    }
};
int main()
{
    Students std1;
    cout<<"enter id"<<endl;
    cin>>std1.id;
    cout<<"enter name"<<endl;
    cin>>std1.name;
    cout<<"enter color"<<endl;
    cin>>std1.color;
    cout<<"His class?"<<endl;
    cin>>std1.clas;
    raj::printkar(std1.name);
    raj::printkar(std1.color);
    raj::printkar(std1.clas);
    raj::printkar(std1.id);
    return 0;
}