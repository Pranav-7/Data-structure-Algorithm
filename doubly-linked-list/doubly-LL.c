#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node *prev;
	struct node *next;
	int data;
};
struct node *head;
void insertion_beg();
void insertion_end();
void deletion_beg();
void deletion_end();
void traverse();
int main()
{
	int choice=0;
	while(choice!=9)
	{
		printf("\nChoose one option from the following list\n");
		printf("\n1.Insert at beginning\n2.Insert at last\n3.Delete from beginning\n4.Delete from last\n5.traverse \n6.Exit\n");
		printf("enter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				insertion_beg();
				break;
			case 2:
			    insertion_end();
				break;
			case 3:
			    deletion_beg();
				break;
			case 4:
				 deletion_end();
				break;
			case 5:
				traverse();
				break;
			case 6:
				 exit(0); 
				break;
			default:
			    printf("Please enter valid choice..");					
		}
	}
}
void insertion_beg()
{
	struct node *temp;
	int ele;
	temp=(struct node*)malloc(sizeof(struct node));
	 
		printf("\nEnter item value");
		scanf("%d",&ele);
		if(head==NULL)
		{
			temp->next=NULL;
			temp->prev=NULL;
			temp->data=ele;
			head=temp;
		}
		else
		{
			temp->data=ele;
			temp->prev=NULL;
			temp->next=head;
			head=temp;
		}
		printf("\nNode inserted\n");
	 
}
void insertion_end()
{
	struct node *temp1,*temp;
	int elem;
	temp1=(struct node*)malloc(sizeof(struct node));
	    printf("\nEnter value");
		scanf("%d",&elem);
		temp1->data=elem;
		if(head==NULL)
		{
			
			temp1->next=NULL;
			temp1->prev=NULL;
			head=temp1;
		}
		else
		{
			temp=head;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=temp1;
			temp1->prev=temp;
			temp1->next=NULL;
		}
 
	printf("\nNode inserted\n");
}
 
void deletion_beg()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("\nUNDERFLOW");
	}
	else if(head->next==NULL)
	{
		
		printf("%d is deleted",head->data);
		head=NULL;
		free(head);
	 
	}
	else
	{
		temp=head;
		printf("%d is deleted",head->data);
		head=head->next;
		head->prev=NULL;
		free(temp);
		 
	}
}
void deletion_end()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("\nUNDERFLOW");
	}
	else if(head->next==NULL)
	{
		printf("%d is deleted",head->data);
		head=NULL;
		free(head);
		 
	}
	else
	{
		temp=head;
		if(temp->next!=NULL)
		{
			
			temp=temp->next;
		}
		printf("%d is deleted",temp->data);
		temp->prev=NULL;
		temp->next=NULL;
		free(temp);
		printf("\nNode deleted\n");
	}
}
 
void traverse()
{
	struct node *temp;
    if(head==NULL)
    {
    	printf("empty LL\n");
	}
	else{
		printf("LINKED LIST TRAVERSE: \t");
	temp=head;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
}
}
 
