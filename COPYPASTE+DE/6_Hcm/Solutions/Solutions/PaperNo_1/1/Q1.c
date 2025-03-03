#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//------------------------------------------
void printAroundArea(int radius, int height ) {
	//Write your statements here
    const double PI = 3.14;
    double surface_area = 2 * PI * radius * height;
    printf("Area around the cylinder: %.2lf\n", surface_area);
	//End your statements
}
//=============DO NOT ADD NEW OR CHANGE STATEMENTS IN THE MAIN FUNCTION========
int main() {
	system("cls");
	printf("\nTEST Q1 (2 marks):\n");
	int r, h;	
	do {
		printf("Enter radius and height of cylinder: ");
		scanf("%d%d",&r, &h);
	} while((r<=0) || (h<=0));	
	printf("\nOUTPUT:\n");
	printAroundArea(r, h);
	printf("\n");
	system ("pause");
	return(0);
}
//============================================================
