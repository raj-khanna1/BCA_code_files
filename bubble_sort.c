#include<stdio.h>
#define SIZE 100
void binary_search(int *ar,int size){
    int flag=0;
    for(int i=0;i<size-1;i++){
        flag=0;
        for(int j=0;j<size-1-i;j++){
            if(ar[j]>ar[j+1]){
                flag=1;
                int temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
        if(flag==0)
        break;
    }
}
int main(){
    int array_size;
    printf("enter the SIZE of the array\n");
    scanf("%d",&array_size);
    int ar[array_size];
    printf("enter elements\n");
    for(int i=0;i<array_size;i++)
    scanf("%d",&ar[i]);
    for(int i=0;i<array_size;i++)
    printf("%d ",ar[i]);
    printf("\nAfte Sorting :\n");
    binary_search(ar,array_size);
    for(int i=0;i<array_size;i++)
    printf("%d ",ar[i]);
    return 0;
}