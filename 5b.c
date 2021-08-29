#include<stdio.h>
int main()
{
	int n,rem,temp,sum=0;
	printf("Enter a number");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		rem=n%10;
		n=n/10;
		sum=sum+(rem*rem*rem);
		
	}
	if(temp==sum)
	{
		printf("%d is an Armstrong Number",temp);
	
	}
	else
{
	printf("%d is not an Armstrong Number",temp);
}
return 0;}
