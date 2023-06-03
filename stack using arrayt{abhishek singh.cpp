#include<stdio.h>
#include<stdlib.h>
#define size 10
void push(int value);
void pop();
void display();
int stack [size],top=-1;

int main()
{
    while(1){
	int value,choice;
	printf("     \nMAIN MENUE     ");
		printf("\n1.Insert any value \n2.Delete any value \n 3.Display the data");
		printf("\nEnter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: 
			     printf("Enter the value to be inserted");
		       	 scanf("%d",&value);
			       push(value);
			break;
			
			case 2: pop();
			break;
			
			case 3: display();
			break;
			
			default: printf("wrong selection!!Try again!!");
		}
		
}
}
void push( int value)
{
	if(top==size-1)
	{printf("\nStack is full!!Insertion is not possible!! ");
	}else{
		top++;
		stack[top]=value;
		printf("insertion success");
	}
}
void pop()
{
	if(top==-1)
	{printf("stack is empty deletion is not possible");
	}else{
		printf("\nDelete : %d ",stack[top]);
		top--;
	}
}
void display()
{
	int i;
if (top==-1){

printf("stact is empty");	
}else{
	printf("\n Stack elements are\n");
	for (i=top;i>0;i--)
	printf("%d\n",stack[i]);
}
}
