#include <stdio.h>
#include <stdlib.h>

//-----------------------------------------------
void sum(int a[],int n,int x, int *s){
	//Begin your statements here
    int i;
    int sum = 0;
    *s = 0;
    //The result of the sum will be stored into the variable s
    for(i = 0; i < n; ++i) {
    	if(x % a[i] == 0) {
    		*s += a[i];
		}
	}
    
	//End your statements
}
//DO NOT ADD NEW OR CHANGE STATEMENTS IN THIS FUNCTION
void input(int a[],int* pn){
	printf("Enter number of elements:");
	scanf("%d",pn);
	int i;
	for(i=0;i<*pn;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
		
}
//==========DO NOT ADD NEW OR CHANGE STATEMENTS IN THE MAIN FUNCTION========
int main(int argc, char* argvs[]){
  	system("cls");
  	printf("\nTEST Q3 (2 marks):\n");
  	int a[100],n, x, s;
  	input(a,&n);
  	printf("Enter x:"); scanf("%d",&x);
  	sum(a,n,x,&s);
  	printf("OUTPUT:\n");
  	printf("%d\n",s);
  	system("pause");
  	return 0;
  	//============================================================
}

