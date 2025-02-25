#include<stdio.h>
#define MAX 100
//--------------------------------
void input(int a[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("a[%d]:", i);
		scanf("%d", &a[i]);
	}
}
//--------------------------------
int countEnd(int a[], int n,int x)
{
     int i, count = 0;
    // Write your statements here
	for(i=0;i<n;i++)
	 if (a[i] % 10 == x)
	  count++;

	// End your statements  
	return count;
}
//==========DO NOT ADD NEW OR CHANGE STATEMENTS IN THE MAIN FUNCTION========
int main(){
	system("cls");
	int n,x,count;
	int a[MAX];
	do
	{
		printf("\nEnter number of elements:");
		scanf("%d", &n);
	  	if(n <= 0)
	    {
			printf("Input invalid.");
	    }
	}while(n <= 0);
	input(a, n);
	printf("Enter x:");
	scanf("%d", &x);
	printf("\nOUTPUT:\n");
	count = countEnd(a, n,x);
	printf("%d", count);
	printf("\n");
  	system ("pause");
	return 0;
}
//=================================================
