#include<stdio.h>
int main()
{
	int i,num;
	scanf("%d",&num);
	i=0;
	while (i<=num)
	{
		if (i%2==0)
		{
			printf("%d\n",i);
			i=i+2;
		}
	}
}

