#include <stdio.h>
#include <stdlib.h>
double calculateS(int n);
//-----------------------------------------------------
double factorial(int num) {
    double result = 1.0;
    int i; 
    for ( i = 1; i <= num; ++i) {
        result *= i;
    }
    return result;
}

double calculateS(int n) {
	double sum = 0;
	//Begin your codes here=====================
	int i; 
	for (i = 0; i <= n; ++i) {
        sum += 1.0 / factorial(i);
    }
	//End your codes============================
	return sum;
}
//=============DO NOT ADD NEW OR CHANGE STATEMENTS IN THE MAIN FUNCTION============
int main() {	
	system("cls");
	printf("\nTEST Q2 (3 marks):\n");
	int n;
	double sum;
	do {
		printf("Enter n = ");
		scanf("%d",&n);
	} while(n<0);	
	printf("\nOUTPUT:\n");
	sum = calculateS(n);
	printf("%.2lf",sum);
	printf("\n");
	system ("pause");
	return(0);	
}
//============================================================
