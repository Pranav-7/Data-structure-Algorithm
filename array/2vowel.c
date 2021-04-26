#include<stdio.h>
int main(){
    int i,j,n,o=0;
    char arr[50];
    printf("Enter the number of elements  ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("ENTER ELEMENT  ");
        scanf("%c",&arr[i]);
        if(arr[i]=='a'|| arr[i]=='e'|| arr[i]=='i'|| arr[i]=='o'|| arr[i]=='u');
        o++;
    }
    printf("number of vowels is %d",o);
    return 0;
}