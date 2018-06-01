#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *start=NULL;
struct node* create()
{
	struct node *r;
	r=(struct node*)malloc(sizeof(struct node));
	return(r);
}
void begin()
{
	struct node *r;
	r=create();
	printf("Enter the data\n");
	scanf("%d",&r->data);
	if(start==NULL)
	{
		start=r;
		r->next=NULL;
	}
	else
	{
		r->next=start;
		start=r;
	}
}
void middle()
{
	int i;
	struct node *r,*t;
	r=create();
	t=start;
	printf("Enter the value\n");
	scanf("%d",&r->data);
	printf("Enter the value after which you want to insert\n");
	scanf("%d",&i);
	while(t->data!=i)
	{
	if(t->data!=i)
	{
		printf("Enter the correct value\n");
	}
    }
	while(t->data!=i)
	{
		t=t->next;
	}
	r->next=t->next;
	t->next=r;	
}
void end()
{
	struct node *r,*t;
	r=create();
	printf("Enter the data");
	scanf("%d",&r->data);
	t=start;
	while(t->next!=NULL)
	{
		t=t->next;
	}
	t->next=r;
	r->next=NULL;
}
void delete1()
{
	struct node *t;
	if(start==NULL)
	{
		printf("List is empty");
	}
	else
	{
		t=start;
		start=start->next;
		free(t);
	}
}
void delete2()
{
	int i;
	struct node *r,*s;
	if(start==NULL)
	{
		printf("list is empty");
	}
	else
	{
		r=start;
		s=start;
		printf("Enter the node to be deleted");
		scanf("%d",&i);
		while(r->data!=i)
		{
			s=r;
			r=r->next;
		}
		s->next=r->next;
		free(r);
	}
}
void delete3()
{
	struct node *r,*s;
	if(start==NULL)
	{
		printf("List is empty");
	}
	else
	{
		r=start;
		s=start;
		while(r->next!=NULL)
		{
			s=r;
			r=r->next;
		}
		s->next=NULL;
		free(r);
	}
}
void display()
{
	if(start==NULL)
	{
		printf("list is empty");
	}
	else
	{
		struct node *r;
		r=start;
		while(r!=NULL)
		{
			printf("%d\t",r->data);
			r=r->next;
		}
	}
}
int main()
{
	int q=1,r,s,t;
	while(q==1)
	{
		printf("Enter the operation\n 1 to insert\n 2 to delete\n 3 to display\n r 4 to exit\n");
		scanf("%d",&r);
		switch(r)
		{
			case 1: printf("1 beginning\n 2 middle\n 3 end\n");
			        scanf("%d",&s);
			        switch(s)
			        {
			        	case 1: printf("starting\n");
			        	        begin();
			        	        break;
			        	case 2: printf("Middle\n");
						        middle();
								break;
						case 3: printf("end\n");
						        end();
							    break;		        
					}
					break;
			case 2: printf("1 in beginninng\n 2 in middle\n 3 in end\n");
			        scanf("%d",&t);
					switch(t)
					{
						case 1: printf("first\n");
						        delete1();
						        break;
						case 2: delete2();
						        break;
						case 3: printf("End\n");
						        delete3();
							    break;    
					}
					break;
			case 3: display();
			        break;
			case 4: return 0;					
		}
		
	}
	return 0;
}
