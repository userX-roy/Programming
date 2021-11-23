/*Release Notes :- This is a multitasking command line programm, here you can do multiple work.
we promise to the user to add new funcationality and features to the upcomming updates. These codes
didn't have any copyright issues, so you have full freedom to use and modify it and of course
help us to make this code more user friendly by giving your valuable feedback.
                            - Thanking You,

                                Saikat Roy
                                    &
                                The Devolpoer Commiunity*/

//Some of the function may not be run in windows OS because they are available only in linux library , feel free to change them :)


// Compilation command :-   gcc -o executable_file_name  file_name.c -lm




//Area for preprocessors
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>


//Area for user_difined_function_declaration
void power(void);
void Come_Out(void);
void PRINT(void);
void CLEAR(void);
void BinToDecimal(void);

//Area for global_variables
int i,i1,i2,i3,i4,i5[10000]={0},i6=0,choice,arr[10],dec;
char c1 , c2[20];
long int l1;
short int si1;
double d1,d2,d3;
long double g1;
float C,F;
time_t t;

//Area for user_defined_function_defination
void BinToDecimal(void)
{
    printf("\nEnter the Binary Number : ");
    scanf("%d",&i1);
    i2=1 , i3 =0 , i4;
    int bin = i1;
    while(bin>0)
    {
        i4 = bin%10;
        i3 = i3 + (i4*i2);
        i2*=2;
        bin /= 10;
    }
    printf("\nDecimal number of %d is : %d",i1,i3);
    return;
}

void power(void)
{

	printf("Enter 2 number A and B respectively (A^B): \n");
    scanf("%lg%lg", &d1,&d2);  //%g is format specifier for double.
	d3 = pow (d1,d2);
	printf("\n%lg  to the power %lg  is = %lg",d1,d2,d3);

}

void Come_Out(void)
{

        printf("\nHappy exit ! , Hope your job Done :)\n\n");
        int Var_for_Count = clock();

        /* Total execution time from this printf to rest of the function will not be calculated*/

        printf("Time Taken for execution is %f second(s).\n\n",(float)Var_for_Count/CLOCKS_PER_SEC);
        exit(0);
}

void PRINT(void)
{

        printf("How many times you want to print your name?\n");
        scanf("%d",&i1);
        printf("What is Your name ?\n");
        scanf("%s",&c2);
        printf("\nYour Name is printing for %d times :\n",i1);

        for(i2=1;i2<=i1;i2++)
        {
                puts(c2);
        }
}

void CLEAR(void)
{
        printf("\n\nDo you Want to Clear the console ? [y/n]");
        c1 = getchar();
        c1 = getchar();/*Noticeable that this line used for overwriting the escape character with exact input.*/

        if (c1=='Y'|| c1=='y')
        {
                system("clear"); /* clrscr() function can be used from <conio.h> in windows system*/
        }

        else

        {
                return;
        }

}



 int main()
{
    printf("Send your feedback to - saikatroyxyz@gmail.com \n");

    while(1)
    {
      start:   //this is for case 5.

      printf("1.Check a number even or odd");
      printf("\n\n2.Print 'N' numbers");
      printf("\n\n3.Print your name 'N' times");
      printf("\n\n4.Addition of 2 number in run time");
      printf("\n\n5.Check a number if it is prime or not");
      printf("\n\n6.Print Prime Numbers between two numbers");
      printf("\n\n7.Temperature convertion from Celsius to Fahrenheit");
      printf("\n\n8.Find the exponantial of any number");
      printf("\n\n9.Which number is big between 4 number");
      printf("\n\n10.Size of Data Types in your machine");
      printf("\n\n11.Let's Play a guessing game.");
      printf("\n\n12.Number conversion.");
      printf("\n\n13.Exit\n\n");//2 times '\n' for two line gap.

      printf("Enter your choice...\n");
      scanf("%d",&choice);

      switch(choice)
       {


          case 1:
                  printf("Enter a number...\n");
                  scanf("%d",&i1);
                     if(i1%2==0)
                        printf("\tEven Number\n");
                     else
                        printf("\tOdd Number\n");
                  CLEAR();
                  break;





          case 2:
                  printf("Enter any integer\n");
                  scanf("%d",&i1);
                  for(i2=0;i2<=i1;i2++)
                     printf("\t%d\n",i2);//'\t' is used to create a gap of 6 characters in the output.
                  CLEAR();
                  break;




          case 3:
                  PRINT();
                  CLEAR();
                  break;



          case 4:
                  printf("Enter the two number ...\n");
                  scanf("%d%d",&i1,&i2);
                  i3=i1+i2;
                  printf("\tSum of these two number is %d \n",i3);//here '\n' after %d is used for changing the line after showing the result
                  CLEAR();
                  break;




          case 5:
                  printf("Enter a integer number\n");
                  scanf("%d",&i1);
                  for(i2=2;i2<=i1/2;i2++)
                  {
                    i3=i1%i2;
                     if(i3==0)
                       {
                          printf("\t%d is not a prime number\n",i1);
                          CLEAR();
                          goto start;
                       }
                  }
                  printf("\t%d is a prime numbre\n",i1);
                  CLEAR();
                  break;




          case 6:
                  printf("Enter two positive integer number...\n");
                  scanf("%d%d",&i1,&i2);
                  int j = i1;
                  int g = i2;
                  printf("\t\nThe Prime numbers are ...\n");
                  for(i3=i1;i3<=i2;i3++)//selecting the stating number for checking
                   {
                        for(i4=2;i4<=i3;i4++)//this for loop will start checking the selected number by dividing the number from 2 to the selected number
                                if(i3%i4==0)//this is checking for the remainder, if it is 0 then control will return to the external for loop
                                break;
                        if(i3==i4)//this means the selected number 'c' is not divide by any number till 'c', that is why the internal loop is run completely
                                {
                                        i5[i6]=i3; // storing the numbers in an array
                                        i6++;
                                }
                    }
                    i6--; //if we don't use this , program will print one '0' after completing printing the prime numbers

                    for(i1=0;i1<=i6;i1++)
                    {
                        printf("\n\t%d",i5[i1]);
                    }

                   printf("\t\n\nThe Non-Prime numbers are ...\n");
                   int k=0,l;
                   for(l=j;l<=g;l++) // we are running a loop to traverse through the selected numbers
                   {
                        if(i5[k]!=l) //comparing the selected number is matching with the array containg prime numbers
                        {
                                printf("\n\t%d",l); //it printing those numbers which are not inside the prime number array
                        }
                        else
                        {
                                k++;
                        }

                   }
                   CLEAR();
                   break;




          case 7:
                  printf("Enter the temp. in celsius:\n");
                  scanf("%f",&C);
                  F=(1.8*C)+32;
                  printf("The temperature in Fahrenheit is :%f\n",F);
                  CLEAR();
                  break;



          case 8:

                  power();
                  CLEAR();
                  break;



          case 9:
                  printf("Enter 4 number ... \n");
                  scanf("%d%d%d%d",&i1,&i2,&i3,&i4);
                  if(i1>i2 && i1>i3 && i1>i4)
                       printf("%d\n",i1);
                  if(i2>i3 && i2>i4)
                       printf("%d\n",i2);
                  else
                     {
                         if(i3>i4)
                             printf("%d\n",i3);
                         else
                            printf("%d\n",i4);
                     }

                   CLEAR();
                   break;


          case 10:

                   printf("Size of int %ld\nSize of float %ld\nSize of char %ld\nSize of long int %ld\nSize of short int %ld\nSize of double %ld\nSize of long double %ld\n",sizeof(i1),sizeof(C),sizeof(c1),sizeof(l1),sizeof(si1),sizeof(d1),sizeof(g1));
                   CLEAR();
                   break;


          case 11:

                   CLEAR();
                   printf("Welcome to this guessing game :)\n");
                   printf("Rule : I have choose a number within 20 , you have to guess that number , you have 5 chances , I will give you hints.\n");
                   puts("Will you like to play ? [y/n]");
                   scanf("%c",&c1);
                   c1 = getchar();
                   if(c1=='N' || c1 == 'n')
                       printf("OK as you like :)");
                   else
                   {
                   printf("Let's check your guess ...\n");
                   srand((unsigned)time(&t));
                   i1 = rand() % 21;
                   for ( i2 = 5; i2 > 0; i2--)

                   {

                        printf("%d tr%s left\n",i2,i2==1 ? "y":"ies");
                        printf("Enter your guessed num (within 20): ");
                        scanf("%d", &i3);
                        if(i3 > 20)
                        {
                                printf("Enter a number within 20\n");
                        }
                        else
                        {
                                if(i3 == i1)
                                {
                                        printf("Congrats you guessed it !\n");
                                        break;
                                }
                                else if(i3 < i1)
                                {
                                        printf("Your guess is smaller than the actual\n");
                                }
                                else if (i3 > i1)
                                {
                                        printf("Your guess is higher than the actual\n");
                                }
                        }



                   }
                   if (i2==0)
                      printf("You unable to guess it ... better luck next time :)\n");
                   }
                   CLEAR();
                   break;

          case 12:
          	   printf("1. Binary to Decimal conversion");
               printf("\n2. Decimal to Binary conversion");
               printf("\n1 or 2 ?\n");
               scanf("%d",&i1);
               switch(i1)
               {
                    case 1:
                            BinToDecimal();
                            break;
                    case 2:
                            //DecimalToBin();
                            printf("\nEnter the Decimal Number : ");
                            scanf("%d",&dec);
                            printf("\nDecimal number of %d is : ",dec);
                            for(i=0 ; dec>0 ; i++)
                            {
                                arr[i]= dec%2;
                                dec/=2;
                            }
                            for(i=i;i>=0;i--){
                               printf("%d",arr[i]);
                            }
                            break;

               }
               CLEAR();
               break;



          case 13:
                   Come_Out();




          default:
                  printf("\tInvalid Choice\n");
                  CLEAR();

        }

   }

    return 0;
}
