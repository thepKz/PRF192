#include<stdio.h>
int main()
{
	int n,sum=0,digit;
	scanf("%d",&n);
	//n=1234;
	while(n>0)
	{
		digit= n%10;
		n=n/10;
		if(digit%2==1)sum=sum+digit;		
	}
	
	printf("%d",sum);
}
