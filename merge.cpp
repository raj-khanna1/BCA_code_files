#include<iostream>
using namespace std;
#include<vector>
void merge(int *ar,int lb,int mid,int ub){
    vector<int> temp;
    int i=lb;
    int j=mid+1;
    while(i<=mid && j<=ub){
        if(ar[i]<=ar[j]){
            temp.push_back(ar[i]);
            i++;
        }
        else{
            temp.push_back(ar[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(ar[i]);
        i++;
    }
     while(j<=ub){
        temp.push_back(ar[j]);
        j++;
    }
    for(int i=lb; i<=ub;i++)
    ar[i]=temp[i-lb];
}
void merge_sort(int *ar,int lb,int ub){
    if(lb<ub){
        int mid=(lb+ub)/2;
        merge_sort(ar,lb,mid);
        merge_sort(ar,mid+1,ub);
        merge(ar,lb,mid,ub);
    }
}
int main(){
    int ar[9]={15,5,24,8,1,3,16,10,20};
    merge_sort(ar,0,8);
    for(int i=0;i<9;i++)
    printf("%d ",ar[i]);
    return  0;
}