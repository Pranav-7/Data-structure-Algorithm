#include<stdio.h>
int main(){
    int i,j,n,o,e;
    int arr[10];
    printf("Enter the number of elements  ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("ENTER ELEMENTS  ");
        scanf("%d",&arr[i]);
    }
    printf("Enter the index at which you want to delete element ");
    scanf("%d",&o);

    for(i=o;i<n;i++){
        arr[i]=arr[i+1];
    }
    printf("element has been deleted from position %d",o);
    return 0;
}