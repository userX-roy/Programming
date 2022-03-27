/*LOGIC -  
INPUT = "God Good"

len = [God(3) + Space(1) + Good(4)] = 7

FOR loop will run 7 times (from God's 'G' to Good's 'd')

will check every char if it is a VOW CONS or SPACE

if it encounter with space (let's assume after God word )

it will increase value of w (that is no. of word)

finally print no. of word by addin 1 with the word value from the FOR loop

adding 1 is because no. of word is always -> (No. Space + 1)
*/

#include<stdio.h>
#include<string.h>
int main()
{
char str[70];

int len,v=0,w=0,c=0;

printf("Enter a sentence: ");
gets(str);

len=strlen(str);


for(int i=0;i<len;i++)
{
if(str[i]=='a'|| str[i]=='A'|| str[i]=='e'|| str[i]=='E'|| str[i]=='i'|| str[i]=='I'|| str[i]=='O'|| str[i]=='o'|| str[i]=='u'|| str[i]=='U')
	v++;

else if(str[i]>'a' && str[i]<='z' || str[i]>'A' && str[i]<='Z')
	c++;

else if(str[i]==' ')
	w++;
}

printf("The number of Vowel is : %d\n",v);
printf("The number of Consonant is : %d\n",c);
printf("The number of words is : %d\n",w+1);
return 0;
}
