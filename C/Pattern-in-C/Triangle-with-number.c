/*Pattern to be printed:
1 2 3 4
1 2 3
1 2
1
*/

#include<stdio.h>
int main()
{
	int row,temp;
	
	printf("Enter number of Rows you want : ");
	
	scanf("%i",&row);
	
	temp=row;
	
	for(int i = 1;i<=row;i++)
	{
		for(int j=temp;j>=1;j--)
			printf("%d ",j);
	
		temp--;
		/*IF 'temp' var is not decremented output will be like :
		 1 2 3 4
		 1 2 3 4 
		 1 2 3 4
		 */
		printf("\n");
	}
	return 0;
}


