#include<stdio.h>
#include<conio.h>
void main(){
       int arr1[]={1,2,3,4,5};
       int arr2[]={6,7,8,9,10};
       int result[20],l1,l2,x=0;
       clrscr();
      // for(l1)
       l1= sizeof(arr1)/sizeof(arr1[0]);
       l2= sizeof(arr2)/sizeof(arr2[0]);

       for(int i=0;i<l1+l2;i++){
		if(i<l1){
			result[i]=arr1[i];
		}
		if(i>=l1){
			result[i]=arr2[x];
			x++;
		}
		printf("%d",result[i]);
       }
       printf(" is united array");d

       getch();
}