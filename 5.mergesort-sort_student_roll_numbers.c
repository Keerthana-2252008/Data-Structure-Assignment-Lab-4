#include<stdio.h>
void merge(int a[],int left,int mid,int right){
    int i=left;
    int j=mid+1;
    int k=left;
    int temp[100];
    while(i<=mid&&j<=right){
        if(a[i]=a[j]){
             temp[k]=a[i];
             i++;
        }
        else{
            temp[k]=a[j];
            j++;
        }
        k++;
    }
    while(i<=mid){
        temp[k]=a[i];
        i++;
        k++;
    }
    while(j<=right){
        temp[k]=a[j];
        j++;
        k++;
    }
    for(i=left;i<=right;i++){
        a[i]=temp[i];
    }
}
void mergesort(int a[],int left,int right){
    if(left<right){
        int mid=(left+right)/2;
        mergesort(a,left,mid);
        mergesort(a,mid+1,right);
        merge(a,left,mid,right);
    }
}
int main(){
    int n,i;
    printf("enter how many numbers you want to input: ");
    scanf("%d",&n);
    int a[n];
    printf("enter %d integers: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    mergesort(a,0,n-1);
    printf("sorted array: \n");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
    return 0;
}