#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *next,*prev;
};
struct node *start=NULL;
struct node* create()
{
	struct node *q;
	q=(struct node*)malloc(sizeof(struct node));
	return(q);
}
void begin()
{
	struct node *r;
	r=create();
	printf("enter the no.\n");
	scanf("%d",&r->data);
	if(start==NULL)
	{
		start=r;
		r->next=NULL;
		r->prev=NULL;				
	}
	else
	{
		r->next=start;
		r->next->prev=r;
		start=r;
		r->prev=NULL;
	}
}
void middle()
{
	int i;
	struct node *r,*t;
	r=create();
	printf("\nEnter the data.\n");
	scanf("%d",&r->data);
	printf("\nEnter the data after which you want to insert\n");
	scanf("%d",&i);
	t=start;
	while(t->data!=i)
	{
		t=t->next;
	}
	r->next=t->next;
	
	r->prev=t;	
	t->next=r;
}
void end()
{
	struct node *r,*t;
	r=create();
	printf("\nEnter the data.\n");
	scanf("%d",&r->data);
	t=start;
	while(t->next!=NULL)
	{
		t=t->next;
	}
	r->next=NULL;
	r->prev=t;
	t->next=r;
}
void delete1()
{
	if(start==NULL)
	{
		printf("list is empty");
	}
	else
	{
		struct node *r;
		r=start;
		start=start->next;
		free(r);
	}
}
void delete2()
{
	int i;
	struct node *r;
	printf("Enter the data to be deleted\n");
	scanf("%d",&i);
	r=start;
	while(r->data!=i)
	{
		r=r->next;
	}
	r->prev->next=r->next;
	r->next->prev=r->prev;
	free(r);
}
void delete3()
{
		struct node *t,*s;
		t=start;
		while(t->next!=NULL)
		{
			t=t->next;
		}
		t->prev->next=NULL;
		free(t);
}
void display()
{
	if(start==NULL)
	{
		printf("list is empty");
	}
	else
	{
		struct node *r,*s;
		r=start;
		while(r!=NULL)
		{
			cout<<"("<<r->prev<<")"<<r->data<<"("<<r->next<<")";
			r=r->next;
		}

	}
}
int main()
{
	int q=1,r,t,s;
	while(q==1)
	{
		printf("Enter the operation\n 1 to insert\n 2 to delete\n 3 to display\n 4 to exit\n");
		scanf("%d",&r);
		switch(r)
		{
			case 1 : printf("1 in beginning\n 2 in middle\n 3 in end\n");
			         scanf("%d",&t);
			         switch(t)
			         {
			         	case 1: printf("data will be inserted in starting\n");
			         	        begin();
			         	        break;
			         	case 2: printf("data will be inserted in middle\n");
						        middle();
								break; 
						case 3: printf("data will be inserted in end\n");
						        end();
								break;		       
					 }
					 break;
			case 2: printf("1 in beginning\n 2 in middle\n 3 in end\n");
			        scanf("%d",&s);
					switch(s)
					{
						case 1: printf("first node will be deleted\n");
						        delete1();
						        break;
						case 2: delete2();
						        break; 
						case 3: printf("last node will be deleted\n");
						        delete3();
								break;		       
					}
					break;							       		 
			case 3 : display();
			         break;		 
		}
	}
	return 0;
}
