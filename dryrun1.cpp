#include<iostream>
using namespace std;
int main(){
    int i=5;
    while(i){
        cout<<i<<endl;
        if(i==1) //yeh nhi hota to infine loop chlta...
        break;
        switch(i){
            
            default:
            
            case 4:
            case 5:
            break;
            case 1:
            continue;
            case 2:
            case 3:
            cout<<" mai hon 3"<<endl;
            break;
        }
        i--;
    }
        
return 0;

}