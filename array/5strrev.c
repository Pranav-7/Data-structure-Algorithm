#include<stdio.h>
int main(){
    int i,j,n,o=0;
    int arr[10];
    printf("Enter the number of elements  ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("ENTER ELEMENTS  ");
        scanf("%d",&arr[i]);
    }
    printf("STRAIGHT\n");
    for(i=0;i<n;i++){
        printf("|%d|",arr[i]);
    }
    printf("\nREVERSE\n");
    for(i=n-1;i>=0;i--){
        printf("|%d|",arr[i]);
    }



    return 0;
}