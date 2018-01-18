#include <stdio.h>

int main(void) {
	int m,s,sum;
	scanf("%d",&m);
	
	for(s=1;s<=m;s++)
	{
		
			if(m%s==0)
		{	
			sum++;
			
		}
	}
		if(sum==2)
		

	printf("it is prime number");
else

printf("not a prime");


	return 0;
}
