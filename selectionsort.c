#include<stdio.h>
int main(){
    int n,i,min,temp;
    int arr[100];
    printf("Enter length of array:\n");
    scanf("%d ",&n);
    printf("Enter array elements:-\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[min])
                min=j;
        }
                temp=arr[min];
                arr[min]=arr[i];
                arr[i]=temp;
    }
    printf("After selection sort");
    for(int i=0;i<n;i++){
        printf(" %d",arr[i]);
    }
    return 0;
}
