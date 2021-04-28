#include<stdio.h>
#define SIZE 5
void push();
void pop();
void traverse();
int stack [SIZE];
int top=-1;
int main()
{
 int ch;
        while(1)
		{
			printf("1.push\n 2.pop\n 3.traverse\n 4.exit\n");
return 0;
}
	void push()
	
		        {
   		         if(top==size-1)
				{
				printf("stack is full");
				}
				 else
				 {
				   top++;
   					printf("enter element for pushing");
					scanf("%d",&element);
					stack[top]=element;
				}
		}
	void pop(){
	}
		
		 if(top==-1)
		   {
			printf("stack is empty");
		   }
		   else
		    {
			printf("%d is popped",stack[top]);
			top--;
                    }
               }
	void traverse(){
	
		     
			if(top==-1)
				{
				 printf("stack is empty");
				}
				else
				{
				for(i-top;i>=-1;i--)
				{
				printf("%d\n");
				}
				}
		      }
