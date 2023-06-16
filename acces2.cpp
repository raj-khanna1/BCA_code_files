//proteced Access Specifier
#include<iostream>
using namespace std;
class Myclass{
    protected:
    string name;
    int roll_no;
    int _class;
    public:
    Myclass(){
        name="modi";
        roll_no=34;
        _class=6;
    }
    void get_data(string nam,int roll,int clas){
        name=nam;
        roll_no=roll;
        _class=clas;
    }
    void print_proteced_data(){
        cout<<"Name : "<<name<<endl;
        cout<<"Roll no. : "<<roll_no<<endl;
        cout<<"Class : "<<_class<<endl;

    }
};
class child:public Myclass{

};
class child2{

};
int main(){
    Myclass obj1;
    obj1.get_data("raj",2346,12);
    obj1.print_proteced_data();
    child child1;
    child1.print_proteced_data();
    
}