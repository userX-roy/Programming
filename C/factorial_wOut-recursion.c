/*Calculation of factorial without RECURSION*/
#include<stdio.h>

int fact(int no)
{
	int sum = 1;
	for(int i = no;i>=1;i--)
	{
		sum = sum*i;
	}
	return sum;
}
/*fact() func execution for input 3 :
  no = 3
  for(3[as i is initialized with 3])
  sum(3) = sum(1)*3
  
  for(2[as i is dectrement by 1])
  sum(6) = sum(3)*2
............ and so on

so the execution will be like "fact(n) = n*(n-1)*(n-2)*.....*1"
*/
int main()
{
	int no;
	printf("Enter a no. to calculate the factorial : ");
	scanf("%d",&no);
	printf("The factorial of %d is : %d\n",no,fact(no));
	return 0;
}
