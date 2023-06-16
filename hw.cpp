#include<iostream>
using namespace std;
class Shape{
    public:
    int height,base;
    Shape(){
        height=0;
        base=0;
    }
    //getdata
    void get_data(){
        cout<<"Enter height and Base Respectively :"<<endl;
        cin>>height>>base;
    }
};
class Rectangle:public Shape{
    public:
    void display_Area(){
        cout<<"Area of Rectangle= "<<(height*base)<<endl;
    }

};
class Triangle:public Shape{
    public:
    void display_Area(){
    cout<<"Area of Triangle= "<<(height*base)*0.5<<endl;
    }

};
int main(){
    Rectangle rec1;
    rec1.get_data();
    rec1.display_Area();
    Triangle tri1;
    tri1.get_data();
    tri1.display_Area();
}