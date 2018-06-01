#include<stdio.h>
#include<stdlib.h>
struct node
{
	int pop;
	struct node *next,*prev;
};
struct node *start=NULL;
struct node* create()
{
	struct node *r;
	r=(struct node*)malloc(sizeof(struct node));
	return(r);
}
void insert()
{
	struct node *r;
	r=create();
	printf("Enter the popularity");
	scanf("%d",&r->pop);
	if(start==NULL)
	{
		start=r;
		r->next=NULL;
		r->prev=start;
	}
	else
	{
		r->next=start;
		start=r;
		r->prev=start;
	}
}
void display()
{
	struct node *r;
	r=start;
	if(start==NULL)
	{
		printf("list is empty");
	}
	else
	{
		while(r!=NULL)
		{
			printf("%d\t",r->pop);
			r=r->next;
		}
	}
}
void delete1()
{
	struct node *r;
	r=start;
	if(start==NULL)
	{
		printf("list is empty");
	}
	else
	{
	   while(r!=NULL)
	   {
	   	r=r->data;
		} 
		
	}
}
int main()
{
	int i=0,a,b,c;
	printf("Enter the no of test cases");
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		printf("Enter the no of friends");
		scanf("%d",&b);
		for(i=0;i<b;i++)
		{
		insert();
	    }
	    printf("Enter no. of friends to be removed");
	    scanf("%d",&c);
	    if()
	    display();
	}
	return 0;
}

