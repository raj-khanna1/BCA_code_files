#include<iostream>
using namespace std;
char& change_str(char *str){
    return str[0];
}//returning refernce to the first character or index.

int main(){
    char str[10]="krazyRaj";
    change_str(str)='c';
    cout<<"AFTER FUNCTION IS CALLED"<<endl;
    cout<<str<<endl;
    return 0;
}