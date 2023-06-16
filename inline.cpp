//INLINE FUNCTION IN C++
#include<iostream>
using namespace std;
class Myclass{
    public:
    //Declaration
    inline int inline_sum_fun(int,int);
};
        //outside Inline function
    inline int Myclass::inline_sum_fun(int a,int b){
        return a+b;
    }
int main(){
    int var1=5;
    int var2=10;
    Myclass obj1;
    cout<<"sum of :"<<var1<<" "<<var2<<" is "<<obj1.inline_sum_fun(var1,var2);
    return 0;
}