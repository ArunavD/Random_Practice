//Delete element form a single linked list.

#include<stdio.h>
#include<stdlib.h>


void deleteFromBeginning();
void deleteFromEnd();
void deleteAtSpecific(int);
void display();


struct node
{
	int data;
	struct node *next;
} *head=NULL;


int main()
{
	int choice,value;
	printf("Enter your choice:\n1.delete from beginning\n2.delete from end.\n3.Specific location\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1: deleteFromBeginning();
				break;
		case 2: deleteFromEnd();
				break;
		case 3: printf("Enter the value you want to delete:");
				scanf("%d",&value);
				deleteAtSpecific(value);
				break;
		default: printf("Wrong input!!Try again!!\n"); 
	}
}


void deleteFromBeginning()
{
	if(head==NULL)
	{
		printf("List is empty.\n");
	}

	else
	{
		struct node *temp = head;
		if(head->next==NULL)
		{
			head=NULL;
			free(temp);
		}
		else
		{
			head=temp->next;
			free(temp);
		}
		printf("One node deleted.\n");
	}
	display();
}

void deleteFromEnd()
{
	if(head==NULL)
	{
		printf("List is empty:\n");
	}
	else
	{
		struct node *temp1=head,*temp2;
		if(head->next==NULL)
		{
			head=NULL;
			//free(temp1);
		}
		else
		{
			while(temp1->next!=NULL)
			{
				temp2=temp1;
				temp1=temp1->next;
			}
			temp2->next=NULL;
		}
		free(temp1);
		printf("one node is deleted\n");
	}
	display();
}

void deleteAtSpecific(value)
{
	struct node *temp1=head,*temp2;

	while(temp1->data!=value)
	{
		if(temp1->next==NULL)
		{
			printf("value not found.\n");
		}

		temp2=temp1;
		temp1=temp1->next;
	}
	temp2->next=temp1->next;
	free(temp1);
	printf("one node deleted.\n");

	display();
}


void display()
{
	if(head==NULL)
	{
		printf("List is empty.\n");
	}

	else
	{
		struct node *temp=head;
		printf("list elements are:\n");
		while(temp->next!=NULL)
		{
			printf("%d",temp->data);
			temp=temp->next;
		}

		printf("%d\n",temp->data);
	}
}