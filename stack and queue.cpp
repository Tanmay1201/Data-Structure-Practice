#include<stdio.h>
#include<conio.h>
#define max 5
int top=-1,stack[5],rear=-1,front=0,queue[5];
void push(int x)
{
	if(top==max)
	{
		printf("The stack is full");
	}
	else
	{
		top=top+1;
		stack[top]=x;
	}
}
void pop(void)
{
	if(top==-1)
	{
		printf("stack is empty");
	}
	else
	{
		top=top-1;
	}
}
void display(void)
{
	if(top==-1)
	{
		printf("stack is empty");
	}
	else
	{
		int i;
		for(i=top;i>=0;i--)
		{
		 printf("%d",stack[i]);	
		}	
	}
}
void insert(int y)
{
	if(rear==max)
	{
		printf("The queue is full");
	}
	else
	{
		rear=rear+1;
		queue[rear]=y;
	}
}
void remove(void)
{
	if(rear==-1)
	{
		printf("The queue is empty");
	}
	else
	{
		front=front+1;
	}
}
void display1(void)
{
	if(rear==-1)
	{
		printf("queue is empty");
	}
	else
	{
		int i;
		for(i=front;i>=0;i--)
		{
			printf("%d",queue[i]);
		}
	}
}
int main()
{
	int q=1,r,e,f,g,h;
	while(q==1)
	{
		printf("Enter the insertion method\n 1 for stack\n 2 for queue\n 3 to exit");
		scanf("%d",&r);
		switch(r)
		{
			case 1: printf("Enter the operation\n 1 to push\n 2 to pop\n 3 to display ");
			        scanf("%d",&e);
			        switch(e)
			        {
			        	case 1: printf("Enter the value");
			        	        scanf("%d",&f);
			        	        push(f);
			        	        break;
			        	case 2: pop();
						        break;
						case 3: display();
						        break;		        	
					}
			        break;
			case 2:printf("Enter the operation\n 1 to insert\n 2 to remove\n 3 to display");
			       scanf("%d",&g);
				   switch(g)
				   {
				   	case 1: printf("Enter the value");
				   	         scanf("%d",&h);
				   	         insert(h);
				   	         break;
				   	case 2:  remove();
					         break;
					case 3:  display1();
					         break;		          
				   }
				   	break;
			case 3: return 0;		   			
		}
	}
	
	return 0;

}








