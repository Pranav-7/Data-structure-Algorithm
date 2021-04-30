#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *last=NULL;
struct node *prev=NULL;
struct node *head=NULL;
struct node *temp=NULL;
 
void traverse();
void insertion_at_beg();
void insertion_at_end();
void delete_at_beg();
void delete_at_end();

int main()
{

int ch;
	while(1)
	{   
	    printf("\n 1.insertion at beg \n 2.insertion at end \n 3.delete at beg \n 4.delete at end \n 5.traverse \n 6..exit \n");
		printf("enter chioce:\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insertion_at_beg();
				break;
			case 2:
			    insertion_at_end();
			    break;	
			case 3:
				delete_at_beg();
				break;
			case 4:
			    delete_at_end();
				break;
			case 5:
				traverse(); 
				break;
			case 6:
				exit(0);
				break;		
			default:
				printf("enter correct chioce:\n");
		}
	}
	return 0;
}
	
void traverse()
{


     if(last==NULL)
    {
        printf(" List is empty\n");
    }
    else
    {
    	printf("display list:\n");
        temp = last->next;
        while(temp->next!=last->next)
        {
            printf("%d\t", temp->data); 
            temp = temp->next;                 
        }
        printf("%d\n", temp->data); 
    } 

	
}


void insertion_at_beg()
{
int element;
printf("Enter data elemamt:\n");
scanf("%d",&element);
temp=(struct node *)malloc(sizeof(struct node));
temp->data=element;
if(last==NULL)
{
	last=temp;
	last->next=last;
}
else
{
temp->next=last->next;
last->next=temp;	
}	
}


void insertion_at_end()
{
int element;
printf("Enter data elemamt:\n");
scanf("%d",&element);
temp=(struct node *)malloc(sizeof(struct node));
temp->data=element;
    if(last==0)
    {
    	last=temp;
	    last->next=last;
    }
    else
    {
	temp->next=last->next;
	last->next=temp;
	last=temp;
    }
}


void delete_at_beg()
{

 if(last==NULL)
    {
    	printf("Enter circular linked list is empty:\n");
	}
	else if(last->next==last)
	{
		temp = last;
        printf ("Element is deleted :%d\n" ,temp -> data);
        last=NULL; 
		free(temp);
	}
	else
	{
		temp = last -> next;
        last -> next = temp -> next;
		printf("Element deleted:%d\n", temp -> data);
        free(temp);
	}	
}


void delete_at_end()
{

struct node *temp1,*temp2;
	if(last==NULL)
	{
		printf("Enter circular linked list empty:\n");
	}
	else if(last->next ==last)
	{
		temp=last;
		printf("element is deleted:%d\n",temp -> data);
		last=0;
		free(temp);
	}
   else
   {
   	temp1=last->next;
   	while(temp1->next!=last->next)
   	{
   	   temp2=temp1;
		  temp1=temp1->next;	
	}
	temp=temp1;
	temp2->next=temp1->next;
	printf("element deleted is:%d\n",temp1->data);
	last=temp2;
	free(temp);
   }
   
   
	
}
	
	
 
