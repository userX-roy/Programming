//This program check if a string is palindrome or not
//example program of passing user define data type as function return type
//codded by SAIKAT ROY


#include<stdio.h>
#include<string.h>

enum Data {false , true};

enum Data IsPalindrome(char Str[])
{
    int left , right , len = strlen(Str);
    enum Data Match = true;

    if(Str == 0)
        return false;

    else{

        left = 0;
        right = len-1; //(len-1) because the char array index start with 0.

        while(left<right)
        {
        /*
            if char[] is "SAIKAT"
                         [012345]
            then comparison will be char[left] and char[right]
            value of left[] will always will be less than right[]
            if left>right that means the comparion is repeating
            char[left(0)]==char[right(5)]
            char[2](I)==char[3](k)
            left(3)>right(2) -> loop will stop
        */
        
            if(Str[left]!=Str[right])
            {
                Match = false;
                break;
            }

            else
            {
                left++;
                right--;
            }
        }

        }

        return Match;
}
int main()
{
        char string[50];

        printf("Enter your string to check :");
        gets(string);

        if(IsPalindrome(string))
        printf("\n\"%s\" is a palindrome.\n",string);

        else
        printf("\n\"%s\" is not a palindrome.\n",string);

        return 0;
}
