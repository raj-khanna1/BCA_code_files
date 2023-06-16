//templates in c++
#include<iostream>
using namespace std;
template <typename T>
T add(T a,T b){
    return a+b;
}
template <typename T>
void show(T str){
    cout<<str<<endl;
}
//template with class
template <typename T,typename T1,typename T2>
class Myclass{
    T a;
    T1 b;
    T2 c;
    public:
    Myclass(T x,T1 y,T2 z){
        a=x;
        b=y;
        c=z;
    }
    //friend void show2(Myclass);
    void show(){
        cout<<"object's a = "<<a<<" b = "<<b<<"name = "<<c<<endl;
    }
};
// void show2(Myclass obj){
//     cout<<"object's a = "<<obj.a<<" b = "<<obj.b<<"name = "<<obj.c<<endl;
// }
int main(){
    string str="raja";
    string str2=" raj";
    // cout<<"sum = "<<add(4.9,6.1)<<endl;
    // cout<<"sum = "<<add(str,str2)<<endl;
    // show(str);
    Myclass <int,int,string>obj1(2,5,str2);
    obj1.show();
    return 0;
}