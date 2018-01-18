#include<stdio.h>
void main()
{
int n1,n2,rem,rev=0;
printf("Enter any number");
scanf("%d",&n1);
n2=n1;
while(n1>0)
{
rem=n1%10;
rev=rev*10+rem;
n1=n1/10;
}
if(n2==rev)
printf("The given number is a palindrome");
else
printf("The given number is not a palindrome");
}
