#include<stdio.h>
int main(){
    int i,j,n,temp;
    printf("enter how many student marks you want to input: ");
    scanf("%d",&n);
    int marks[n];
    printf("enter %d integers: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&marks[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(marks[j]>marks[j+1]){
                temp=marks[j];
                marks[j]=marks[j+1];
                marks[j+1]=temp;
            }
        }
    }
    printf("sorted array: ");
    for(i=0;i<n;i++){
        printf("%d",marks[i]);
    }
    return 0;
}