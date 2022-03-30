//Will print arugument supplied in Command line 


#include<stdio.h>
int main(int argc , char *argv[])
{
	for(int i =0;i<=argc;i++)
		printf("%d Argument is %s\n",i,argv[i]);
	return 0;
}
