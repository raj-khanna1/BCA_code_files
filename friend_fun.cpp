// FRIEND FUNCTION..
#include<iostream>
using namespace std;
class Myclass{
    int a,b;
    public:
    Myclass(){
        a=1;
        b=1;
    }
    void putdata(int var1,int var2){
        a=var1;
        b=var2;
    }
    void showdata(){
        cout<<"Value of a and b is :"<<a<<" "<<b<<endl;
    }
    friend void sum(Myclass);//FRIEND FUN() DECLARATION
};
void sum(Myclass obj){//FRIEND FUN() DEFINATION
    cout<<"sum of "<<obj.a<<" and "<<obj.b<<" is :"<<obj.a+obj.b<<endl;
}
int main(){
    Myclass obj;
    obj.putdata(2,6);
    obj.showdata();
    sum(obj);//FRIEND FUN() CALL
    return 0;
}