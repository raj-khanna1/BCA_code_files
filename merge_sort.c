#include<stdio.h>
#define size 9
int ar2[size];
void merge(int *ar,int lb,int mid,int ub){
    int i=lb;
    int j=mid+1;
    int k=lb;
    while(i<=mid && j<=ub){
        if(ar[i]<=ar[j]){
            ar2[k]=ar[i];
            i++;
        }
        else{
        ar2[k]=ar[j];
        j++;
        }
        
        k++;
        if(i>mid){
            while(j<=ub){
                ar2[k]=ar[j];
                j++;
                k++;
            }
            
        }
        else{
            while(i<=mid){
                ar2[k]=ar[i];
                i++;
                k++;
            }
        }
    }
    for(int i=0;i<size;i++)
    printf("%d ",ar2[i]);
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
    for(int i=0;i<size;i++)
    ar[i]=ar2[i];
    for(int i=0;i<size;i++)
    printf("%d ",ar[i]);
}