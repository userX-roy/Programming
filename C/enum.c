//Program to implement enum in C
#include<stdio.h>
int main()
{
	printf("Experiment 'Enum' Keyword\n");
	enum MyVar {Saikat,Dell};
	enum MyVar VAR;
	VAR = Dell;
	printf("Value of VAR is %d\n",VAR);

	/*NOTE THIS ONE*/

	printf("\n");
	enum MyEnum {D=10,E}; // here the value of E is equal to 11 because it is decided by the pewvious element
	enum MyEnum ENUM;
	ENUM = E;
	printf("Value of ENUM is %d\n",ENUM);
	return 0;
}
