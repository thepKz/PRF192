#include<stdio.h>

int checkPrime(int n)
{
	if(n<2)return 0;
	if(n==2)return 1;
	int i;
	for(i=2;i<=sqrt(n);i++)
	 if(n%i==0)return 0;
	 
	 return 1;
}
int main()
{
	int n, a[1001],i;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
	 
	 int maxPrime=0;
    for(i=0;i<n;i++)
     if(checkPrime(a[i]))
     {
     	if(a[i]>maxPrime)maxPrime=a[i];
	 }
	 
	 printf("%d",maxPrime);
	 
	 
	
}
