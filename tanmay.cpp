#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left,*right;
};
struct node *root=NULL;
struct node* create()
{
	struct node *r;
	r=(struct node*)malloc(sizeof(struct node));
	return(r);
}
void insert()
{
	int t;
	struct node *r,*s;
	s=root;
	printf("Enter the value");
	scanf("%",&t);
	while(s!=NULL)
	{
	  if(t<s->data)
	{
		s=s->left;
	}
		else
	{
		s=s->right;
	}
    }
    r=create();
    r->data=t;
    r->left=NULL;
    r->right=NULL;
}
void display(struct node *tree)
{
	if(tree==NULL)
	{
		printf("tree is empty");
	}
	else
	{
		printf("%d",tree->data);
		display(tree->left);
		display(tree->right);
	}
}
int main()
{
	int p=1,q,r,s;
	while(p==1)
	{
		printf("Enterr the operation\n 1 to insert\n 2 to display\n 3 to return");
		scanf("%d",&q);
		switch(q)
		{
			case 1: insert();
			        break;
			case 2: display(root);
					break;
			case 3: return 0;		        
		}
	}
	return 0;
}
