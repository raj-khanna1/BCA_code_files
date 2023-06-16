#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int>vector_arr;
    // vector_arr.push_back(1);
    // vector_arr.push_back(2);
    // vector_arr.push_back(3);
    // vector_arr.push_back(4);
    // vector_arr.push_back(5);
    // cout<<"ELEMENTS OF VECTOR ARRAY"<<endl;
    // for(int i=0;i<vector_arr.size();i++)
    // cout<<i+1<<" = "<<vector_arr[i]<<endl;
    // cout<<"Size of Vector is means no. of elements is "<<vector_arr.size()<<endl;
    // cout<<"BUT\nCapacity of Vector is means the Allocated size is "<<vector_arr.capacity()<<endl;
    // vector_arr[1]=10;
    // vector_arr.push_back(100);
    // for(int i=0;i<vector_arr.size();i++)
    // cout<<i+1<<" = "<<vector_arr[i]<<endl;

    //Compile time initialisation;
    vector<int> vector_ar{2,4,6,8,10};
    for(int i=0;i<vector_ar.size();i++)
    cout<<vector_ar[i]<<endl;
    vector_ar[2]=22;
        for(int i=0;i<vector_ar.size();i++)
    cout<<vector_ar[i]<<" ";

     cout<<vector_ar.at(5);
    return 0;
}