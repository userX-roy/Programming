//Program to implement array of integer passing in C
/*Saikat Roy*/
#include<stdio.h>

int func (int c[] , int i);

int main()
{
	int i;
	/*int ch[]; <= can't do this because compiler is not supporting empty initializing*/
	printf("How many element you want to add ? ");
	scanf("%d",&i);

	int ch[i];
	
	printf("Enter the elements : ");
	for(int k=0;k<i;k++)
	{
		scanf("%d",&ch[k]);
	}
	
	printf("Sum is : %d\n",func(ch,i));
	return 0;
}

int func (int c[] , int i)
{
	int sum = 0;
	for(int l =0;l<i;l++)
	{
		sum += c[l];
	}

	return sum;
}

