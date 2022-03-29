/* Pattern to print :-         
 *
 **
 ***
 ****
 */

#include<stdio.h>
int main()
{
	int NofColoum;
	printf("Enter the number of coloums : ");
	scanf("%d",&NofColoum);
	printf("Here is the pattern :\n\n");
	//External for loop will control the printing of ROW
	
	for(int a=1;a<=NofColoum;a++)
	{
		//Internal for loop will control the COLOUM printing
		
		for(int b = 1 ; b<=a ; b++)
			printf("* "); // No bracket is need as this for loop contain only one statement on its body

		printf("\n");
	}
	
	return 0;
}
