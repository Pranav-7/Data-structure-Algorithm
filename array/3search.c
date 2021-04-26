#include<stdio.h>
# define size 5
/*
BINARY SEARCH
int search(arr,o,l,r){
    int m;
    if(l>r){
        return 0;
    }
    m= (r-l)/2 +l;
    if(arr[m]==0){
        return 1;
    }
    else{
        if(arr[m]>o){
            return search(arr,o,m+1,r);
        }
        if(arr[m]<o){
            return search(arr,o,l,m-1);
        }
    }

}*/
int main(){
    int i,j,n,o,k=0;
    int arr[size];
    int l=0 ,r=size-1;
    printf("enter elements in sorted order\n");
    printf("Enter the number of elements  ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("ENTER ELEMENTS  ");
        scanf("%d",&arr[i]);
    }
    printf("enter element you want to search ");
    scanf("%d",&o);
    //k=search(arr,o,n);
    for(i=0;i<n;i++){

        if(arr[i]==o){
            k = 1;
        }
    }
    if(k==1){
        printf("element exist!");
    }
    else{
        printf("element doesnt exist");
    }
    return 0;
}