#include <stdio.h>
#include <math.h>

void printNumber(float a, float b)
 { 
 	//Write your statements here
   if ((a > 0 && b > 0) || (a < 0 && b < 0))
    {
        printf("%.2f\n", a * a + b * b);
    }
    else
    {
        printf("%.2f\n", a * b);
    }
   
    //End your statements    
}
//=============DO NOT ADD NEW OR CHANGE THE STATEMENTS IN THE MAIN FUNCTION========
int main() {

 	system("cls");
 	printf("\nTEST Q1 (2 marks):\n");
    float a, b;
    printf("a= ");
    scanf("%f", &a);
    printf("b= ");
    scanf("%f", &b);
	printf("\nOUTPUT:\n");
	printNumber(a, b);   
    printf("\n");
    system ("pause");
  	return(0); 
}
 //============================================================ 





