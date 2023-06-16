#include<iostream>
using namespace std;
//template defination for functions
template <typename T>
T add(T a, T b){
    return a+b;
}

//template definations for class
template <typename T>
class Myclass{
    T a,b;
    public:
    Myclass(T arg1,T arg2){
        a=arg1;
        b=arg2;
    }
    void show_addition(){
        cout<<"Addition of both passed arguments is "<<a+b<<endl;
    }
};
int main(){
    string str1="Raja ";
    string str2="RAM";
    int a=3,b=6;
    float f1=3.4,f2=5.9;
    cout<<"sum of int is "<<add(a,b)<<endl;
    cout<<"sum of int is "<<add(f1,f2)<<endl;
    cout<<"sum of int is "<<add(str1,str2)<<endl;

    //for class template testing
    Myclass <int>object1(4,7);
    Myclass <float>object2(4.9,7.5);
    Myclass <string>object3(str1,str2);
    object1.show_addition();
    object2.show_addition();
    object3.show_addition();



}