#include<iostream>
using namespace std;
#include<vector>
int main(){
int ar[]={1,2,3,4,5,6,7,8,9},size=9,i;
/*
cout<<"NORMAL ARRAY PRINTING.."<<endl;
for(i=0;i<size;i++)
cout<<ar[i]<<endl;
*/
vector <int>vector_array{1,2,3,4,5};

cout<<"VECTOR ARRAY PRINTING.."<<endl;
for(i=0;i<vector_array.size();i++)
cout<<vector_array[i]<<endl;
cout<<"checking for upperbound :"<<vector_array.at(6)<<endl;
return 0;
}