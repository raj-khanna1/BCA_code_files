#include<iostream>
using namespace std;
class Myclass{
    int a;
    public:
    Myclass(){
        a=3;
    }
    inline int square(int);
};
inline int Myclass::square(int b){
    return a*a;
}
int main(){
    Myclass obj;
    cout<<obj.square(2);
    return 0;
}