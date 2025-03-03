#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 100
void inputArray(int a[], int n);
//The function countSquareNumbers used to count the square numbers in array
void countSquareNumbers(int a[], int n, int* count); 
//The function checkSquareNumber used to check whether n is a square number or not
int checkSquareNumber(int n); 
//----------------------------------------------
void countSquareNumbers(int a[], int n, int* count) {

	//Begin your codes here=====================
	//Invoke to checkSquareNumber function to check whether n is square number or not
	int i; 
	for (i = 0; i < n; i++) {
        if (checkSquareNumber(a[i])) {
            (*count)++;
        }
    }
	//End your codes============================

}
//-------------------------------------------
int checkSquareNumber(int n) {
	//Begin your codes here=====================
	int sqrtNum = sqrt(n);
    return sqrtNum * sqrtNum == n;
	//End your codes============================
}
//=============DO NOT ADD NEW OR CHANGE STATEMENTS IN THE MAIN FUNCTION============
int main() {
	system("cls");
	printf("\nTEST Q3 (2 marks):\n");
	int n, a[MAX], count=0;
	char c;
	do {
		printf("Enter number of elements[1..100]:");
		fflush(stdin);
		scanf("%d%c", &n, &c);
	} while(n<1 || n>MAX || c != '\n');
	inputArray(a,n);
	printf("\nOUTPUT:\n");
	countSquareNumbers(a,n,&count);
	printf("%d",count);
	printf("\n");
	system ("pause");
	return 0;
}
//=== Do not add new or change statements in the function.===
void inputArray(int a[], int n) {
	int i;
	for(i=0; i<n; i++) {
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}

