/*Calculation of factorial using RECURSION method*/
#include<stdio.h>
int facto (int);
int main()
{
	int no;
	printf("Enter a number to calculate the factorial : ");
	scanf("%d",&no);
	printf("Factorial of %d is %d\n",no,facto(no));
	return 0;
}

int facto (int x)
{
	int fact = 0;
	if(x>0)
	{
		fact = x * facto(x-1);
		return fact;
	}
	else
	    return 1;
}
