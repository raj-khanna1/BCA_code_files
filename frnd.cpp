// FRIEND FUNCTION IN CPP
#include<iostream>
using namespace std;
class Myclass{
    int a,b;
    public:
    Myclass(){
        a=2;
        b=3;
    }
    friend void square(Myclass);// friend can access Private member also even it is not a Member of the class.
};
void square(Myclass obj){
    cout<<"Square of "<<obj.a<<" is "<<obj.a*obj.a<<endl;
    cout<<"Square of "<<obj.b<<" is "<<obj.b*obj.b<<endl;
}
int main(){
    Myclass obj;
    square(obj);
    return 0;
}