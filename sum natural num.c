#include <stdio.h>
int main()
{
    int m, s, sum = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d",&m);

    for(s=1; s <= m; ++s)
    {
        sum += s;
    }

    printf("Sum = %d",sum);

    return 0;
}
