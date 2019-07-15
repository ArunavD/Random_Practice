//Insert new element into a single linked list...

#include<stdio.h>
#include<stdlib.h>
//#include<conio.h>

void insertAtBeginning(int);
void insertAtEnd(int);
void insertBetween(int,int,int);
void display();


struct node
{
	int data;
	struct node *next;
}*head=NULL;

int main()
{
	int choice,value,loc1,loc2;

	printf("enter the value you want to insert:");
	scanf("%d",&value);

	printf("Enter your choice:\n1.insert at beginning\n2.insert at the end\n3.insert in between");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: insertAtBeginning(value);
				break;
		case 2: insertAtEnd(value);
				break;
		case 3: printf("Enter the two values where you want to insert:");
				scanf("%d%d",&loc1,&loc2);	
				insertBetween(value,loc1,loc2);
				break;
		default: printf("Wrong input!!try again!!");				
	}
}


void insertAtBeginning(int value)
{
	struct node *newNode;
	newNode=(struct node*)malloc(sizeof(struct node));

	newNode->data=value;

	if(head==NULL)
	{
		newNode->next=NULL;
		head=newNode;
	}

	else
	{
		newNode->next=head;
		head=newNode;
	}

	printf("\none node inserted\n");
	display();
}

void insertAtEnd(int value)
{
	struct node *newNode;
	newNode=(struct node*)malloc(sizeof(struct node));

	newNode->data=value;
	newNode->next=NULL;

	if(head==NULL)
	{
		newNode->next=NULL;
		head=newNode;
	}

	else
	{
		struct node *temp=head;

		while(temp->next!=NULL)
		{
			temp=temp->next;
		}

		temp->next=newNode;
	}

	printf("\none node inserted\n");
	display();

}

void insertBetween(int value,int loc1,int loc2)
{
	struct node *newNode;
	newNode=(struct node*)malloc(sizeof(struct node));

	newNode->data=value;

	if(head==NULL)
	{
		newNode->next=NULL;
		head=newNode;
	}
	else
	{
		struct node *temp=head;

		while(temp->data!=loc1)
		{
			temp=temp->next;
		}

		newNode->next=temp->next;
		temp->next=newNode;
	}

	printf("\none node inserted\n");
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