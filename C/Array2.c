/*Initializing a value in a specific position of an array*/
/*date : Oct 3 , 2021*/
//Edited with Vim
#include <stdio.h>

int main()
{
    int arr[10] = {[2]=10,[4]=24}; // value initializing within specific position of an array
    
    printf("%d %d %d %d\n",arr[2],arr[4],arr[5],arr[7]); //anything in 'C' array is not initialized is initialized with the value 0 by C compiler 

    return 0;
}
