#include<stdio.h>
void gcd (void)
{
    int var1 , var2 ,rem = 1;
    re_enter :
    printf("Enter your 2  desired number (1st one should be bigger than the 2nd one) : ");
    scanf("%d%d",&var1,&var2);
    int k = var1 , l = var2;
    if (k>l) // Will check if the 1st no is bigger than 2nd no.
    {
        while (rem!=0)
        {
            rem = var1%var2;
            var1 = var2;
            var2 = rem ;
        }

        printf("GCD of %d and %d is %d\n",k,l,var1);
        
    }

    else 
        {
            printf("\nYour 1st num is not bigger than the 2nd one , try once more by following the condition \n\n\n");
            goto re_enter; // will send the control to the 'number input' part so that user can put 1st no bigger than 2nd .
        }
    
}

int main(int argc, char const *argv[])
{
    printf("\nProgram to calculate GCD using function\n\n");

    gcd();
    return 0;
}
