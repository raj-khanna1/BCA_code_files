// ACCESS SPECIFIERS
// PRIVATE
#include<iostream>
using namespace std;
class Myclass{
    int var1;// Private Declaration
    int var2;
    public: //Public declaration
    string name; 
    void use_private(int a,int b){
        var1=a;
        var2=b;
    }
    //inside Member function to print private variables.
    void getprivate_data(){
        cout<<"Private var 1 ="<<var1<<endl;
        cout<<"Private var 2 ="<<var2<<endl;
    }   
    void print_private_data_members();
};
//Outside Member Function Declaration
void Myclass::print_private_data_members(){
    cout<<"FROM OUTSIDE DECLARED FUNCTION:"<<endl;
    cout<<"variable 1="<<var1<<endl;
    cout<<"variable 2="<<var2<<endl;
}
int main(){
    Myclass obj1;
    obj1.use_private(10,5);
    obj1.getprivate_data();
    obj1.print_private_data_members();
}