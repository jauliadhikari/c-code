#include<stdio.h>
int main()
{
	int num,count=1;
	scanf("%d",&num);
	
	for(int i=2;i<=num;i++)
	{
		if(num%i==0)
		count++;
	}
	if(count>2)
	{
		printf("not prime");
	}
	else
	{
		printf("is prime");
	}
}
