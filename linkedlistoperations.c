#include<stdio.h>
#include<stdlib.h>
struct node
	{
	int data;
	struct node *next;
};
struct node *head,*newnode,*temp;
void create();
void insertbeg();
void insertlast();
void insertpos();
void deletebeg();
void deletelast();
void deletepos();
void display();
void search();
void sort();
void traverse();

void main(){
int n;
printf("Enter the number of nodes");
scanf("%d",&n);
create(n);
printf("\n list \n");
display();
int choice=0,ch1,ch2;
 while(choice!=7)
	{
	printf("\n choose one operation from the following list \n");
printf("\n 1.Insertion \n 2.Deletion \n 3.Display \n 4.Search an element \n 5.Sorting \n 6.Travesre \n 7.Exit \n");
printf("\n Enter your choice \n");
scanf("\n %d",&choice);
switch(choice)
{
case 1:
printf("\n 1.insert at beginning \n 2.Insert at last \n 3.Insert at position \n");
printf("\n choose your insertion operation \n");
scanf("%d",&ch1);
switch(ch1)
	{
	case 1:
		insertbeg();
		break;
	case 2:
		insertlast();
		break;
	case 3:
		insertpos();
		break;
	}
	break;
case 2:
printf("\n 1.Delete from beginning \n 2.Delete from last \n 3.Delete from position \n");
printf("\n choose your deletion operation");
scanf("%d",&ch2);
switch(ch2)
	{	
	case 1:
		deletebeg();
		break;
	case 2:
		deletelast();
		break;
	case 3:
		deletepos();
		break;
	case 4:
		search();
		break;
	case 5:
		sort();
		break;
	case 6:
		traverse();
		break;
	case 7:
		printf("Exit from the operation");
		exit(0);
		break;
default:
	printf("please enter valid choice");
	}
    }
}
}
void create(int n)
	{
	struct node *temp;
	int data,i;
	head=(struct node*)malloc(sizeof(struct node));	
	printf("Enter value in node 1:");
	scanf("%d",&data);
	head->data=data;
	head->next=NULL;
	temp=head;
	for(i=2;i<=n;i++)
		{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("enter value in node %d:",i);
		scanf("%d",&data);
		newnode->data=data;
		newnode->next=NULL;
		temp->next=newnode;
		temp=temp->next;
		}
	}
void insertbeg()
{
struct node *ptr=(struct node*)malloc(sizeof(struct node));
printf("enter the value at info");
scanf("%d",&ptr->data);
	if(head==0)
	{
	head=ptr;
	ptr->next=NULL;
	}
	else
	{
	ptr->next=head;
	head=ptr;
	}
}
void insertlast()
{
int data;
newnode=(struct node*)malloc(sizeof(struct node));
printf("\n Enter values:");
scanf("%d",&data);
newnode->data=data;
	if(head==NULL)
	{
	newnode->next=NULL;
	head=newnode;
	}
	else
	{
	temp=head;
	while(temp->next!=NULL)
	{
	temp=temp->next;
	}
	temp->next=newnode;
	newnode->next=NULL;
	}
}
void insertpos()
{
int pos,co;
printf("Enter the position");
scanf("%d",&pos);
if(pos>co||pos<0)
printf("not a position");
else
{
	if(pos==1)
	insertbeg();
	else
	{
	struct node*t,*c;
	int i;
	struct node*ptr=(struct node*)malloc(sizeof(struct node));
	printf("Enter the value at info:");
	scanf("%d",&ptr->data);
	t=head;
	for(i=2;i!=pos;i++)
	t=t->next;
	ptr->next=t->next;
	t->next=ptr;
	}
}
	co++;
}
void deletebeg()
{
struct node *ptr;
	if(head==NULL)
	{
	printf("\n list is empty");
	}
	else
	{
	ptr=head;
	head=ptr->next;
	free(ptr);
	printf("\n node delete from the beginning...");
	}	
}
void deletelast()
{
struct node *ptr,*ptr1;
if(head==NULL)
{
printf("\n list is empty");
}
else if(head->next==NULL)
{
head=NULL;
free(head);
printf("only node of the list deleted...\n");
}
else
{
ptr=head;
while(ptr->next!=NULL)
	{
	ptr1=ptr;
	ptr=ptr->next;
	}
ptr1->next=NULL;
free(ptr);
printf("Delete node from the last..\n");
}
}
void deletepos()
{
struct node *ptr,*ptr1;
int loc,i;
printf("\n Enter the location of the node after which you want to perform deletion \n");
scanf("%d",&loc);
ptr=head;
for(i=0;i<loc;i++)
	{
	ptr1=ptr;
	ptr=ptr->next;
	if(ptr==NULL)
	{
	printf("\n Can't delete");
	return;
	}
}
ptr1->next=ptr->next;
free(ptr);
printf("\n Delete node %d",loc+1);
}
void display()
{
struct node *ptr;
if(head==NULL)
{
printf("list is empty");
return;
}
else
{
ptr=head;
printf("The list elements are : \n");
while(ptr !=NULL)
	{
	printf("%d\n",ptr->data);
	ptr=ptr->next;
	}
}
}
void search()
	{
	struct node *ptr;
	int item,i=0,flag;
	ptr=head;
	if(ptr==NULL)
	{
	printf("\n Empty list\n");
	}
	else
	{
	printf("\n Enter item which you want to search \n");
	scanf("%d",&item);
	while(ptr!=NULL)
	{
	if(ptr->data==item)
	{
	printf("item found at location %d",i+1);
	flag=0;
	}
	else
	{
		flag=1;
	}
	i++;
	ptr=ptr->next;
	}
	if(flag==1)
		{
		printf("item not found\n");
		}
	}
}
void sort()
{
int x;
struct node *temp1;
temp=head;
while(temp!=NULL)
{
temp1=temp->next;
while(temp1 !=NULL)
{
	if(temp->data>temp1->data)
	{
	x=temp->data;
	temp->data=temp1->data;
	temp1->data=x;
	}
	temp1=temp1->next;
}
printf("after sorting:\n");
	display();
}
}
void traverse()
	{
	temp=head;
	while(temp!=NULL)
		{
		temp=temp->next;
		}
	display();
}
	











































































































































