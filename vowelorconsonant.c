#include<stdio.h>
int main()
{
    char c;
    int isLowercase,isUppercase;
    printf("Enter an alphabet:");
    scanf("%c",&c);
isLowercase = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
isUppercase = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (isLowercase||isUppercase)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;
}
