//Defining Constructor Outside of the Class
#include<iostream>
using namespace std;
class Myclass{
    public:
    Myclass();
};
//Defining
Myclass::Myclass(){
    cout<<endl<<"I AM CONSTRUCTOR DEFINED Outside the class."<<endl;
}
int main(){
    Myclass obj1;
    return 0;
}