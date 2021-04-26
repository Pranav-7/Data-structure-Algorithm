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
    printf("Enter the index at which you want to insert element and the element which you want to insert");
    scanf("%d%d",&o,&e);

    for(i=o;i<n;i++){
        arr[i+1]=arr[i];
    }
     arr[o]=e;
    printf("%d element has been added to position %d",arr[o],o);
    return 0;
}