#include<stdio.h>
int main()
{
	int n,sum=0,temp,i;
	printf("Input number");
	scanf("%d",&n);
	temp=n;
	for( i=0;temp>0;i++)
	{
		sum=sum+temp%10;
		temp=temp/10;
	}
	printf("Sum of digits : %d",sum);
	return 0;
}
