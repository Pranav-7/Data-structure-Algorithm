#include<stdio.h>
int main(){
    int i,j,n,o=0;
    int arr[10];
    printf("Enter the number of elements  ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("ENTER ELEMENTS  ");
        scanf("%d",&arr[i]);
        o=o+arr[i];
    }
    printf("Sum of all the elements is %d",o);
    return 0;
}