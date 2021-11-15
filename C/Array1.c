/*Simple Program to take input 5 array element and printing them out*/

#include <stdio.h>

int main()
{
    printf("Hello World\n");
    
    int arr[5];
    
    printf("Enter 5 number : ");
    for(int i = 0;i<5;i++)
    scanf("%d",&arr[i]);
    
    for(int i = 0;i<5;i++)
    printf("\nYou have Entered : %d\n",arr[i]);

    return 0;
}
