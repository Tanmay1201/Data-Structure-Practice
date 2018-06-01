#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left,*right;
};
struct node *root;
struct node* create()
{
	struct node *r;
	r=(struct node*)malloc(sizeof(struct node));
	return(r);
}
void insert()
{
	struct node *r,*s;
	r=create();
	printf("Enter the data");
	scanf("%d",&r->data);
	r->left=NULL;
	r->right=NULL;
	if(root==NULL)
	{
		root=r;
	}
	else
	{
		s=root;
		while(s!=NULL)
		{
			if(s->data>r->data)
			{
				if(s->left==NULL)
				{
					s->left=r;
					s=s->left;
				}
			}
			else if(s->data<r->data)
			{
				
				if(s->right==NULL)
				{
					s->right=r;
					s=s->right;
				}
			}
		}
	}
}
void display()
{
	struct node *r;
	if(r!=NULL)
	{
		printf("%d",r->data);
	}
}
int main()
{
	int q=1,r,d;
	while(q==1)
	{
		printf("Enter 1 to insert\n 2 to display\n 3 to return");
		scanf("%d",&r);
		switch(r)
		{
			case 1: insert();
			        break;
			case 2: display();
					break;
			case 3: return 0;		
			
		}
	}
	return 0;
}
