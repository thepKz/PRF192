#include <stdio.h>
#include <math.h>
//------------------------------
void calAreaOfCircle(double r)
 { 	   
     //Write your statements here
    
     printf("%.2f",M_PI*r*r);
    
    //End your statements    
}
//=============DO NOT ADD NEW OR CHANGE STATEMENTS IN THE MAIN FUNCTION=============
int main() {
  	system("cls");
  	
 	printf("\nTEST Q1 (2 marks):\n");
    double radius, result;
    printf("Enter radius=");
    scanf("%lf", &radius);
	printf("\nOUTPUT:\n");
	calAreaOfCircle(radius);   
    printf("\n");
    system ("pause");
  	return(0); 
}
//=====================================================================






