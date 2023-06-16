#include<iostream>
using namespace std;
void use_of_refernced_var(int &var1,int var2){
    //here copy is not created as our parameters are refernced var
    //therfore now  main() variables have another name and they 
    //can be change from here.
    var1++;
    var2++;

}
int main(){
    // string vs characters in cout
    // cout<<"string"<<endl;
    // cout<<"character by using single quotes:\t"<<'H'<<endl;
    int a=5;
    int b=10;
    cout<<"a before fun() call ="<<a<<endl;
    cout<<"b before fun() call ="<<b<<endl;
    cout<<"AFTER fun() call --->"<<endl;
    use_of_refernced_var(a,b);
    /* //adrs is not passed bcoz refernced var doesn't need that 
    it manages all its own. or yeh bhi aek bjah hai hi bas unka 
    hum aek or nam hi to rakh rhe hain to kisbat ke adrs ki jarurt. */
    cout<<"a after fun() call ="<<a<<endl;
    cout<<"b after fun() call ="<<b<<endl;
    
    return 0;
}