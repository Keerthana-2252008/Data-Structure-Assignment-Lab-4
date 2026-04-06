#include<stdio.h>
int main(){
    int i,j,n,min,temp;
    printf("enter how many elements you want to input: ");
    scanf("%d",&n);
    int productprice[n];
    printf("enter %d integers: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&productprice[i]);
    }
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(productprice[j]<productprice[min]){
                min=j;
            }
            temp=productprice[j];
            productprice[j]=productprice[min];
            productprice[min]=temp;
        }
    }
    printf("sorted array: ");
    for(i=0;i<n;i++){
        printf("%d",productprice[i]);
    }
    printf("lowest price=%d\n",productprice[0]);
    return 0;
}
