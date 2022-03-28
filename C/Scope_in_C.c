#include<stdio.h>

int a = 10;

void check(void)
{
printf("%d\n",a); //print 10 since a =10 in global
}

int main()
{
int a = 30;

//Block 1:

{
int a = 45;
printf("%d\n",a); //will print 45 as in this particular block of code contain a = 45. 
}

//Block 2:

{
a=a+10;   // print 40 as 'a=45' scope has expired as control comes out from that block of code , here a will considered as '30'.
}

printf("%d\n",a);

check();
return 0;
}
