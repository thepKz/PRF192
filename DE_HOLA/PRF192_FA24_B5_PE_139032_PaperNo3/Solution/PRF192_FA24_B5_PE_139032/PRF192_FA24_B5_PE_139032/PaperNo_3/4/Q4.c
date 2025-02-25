#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n,i,j;
  scanf("%d",&n);
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
  for (i=1;i<=n;i++)
  {
  
   for(j=1;j<=n-i+1;j++)
    if(j==1||j==n-i+1)printf("*");
     else 
     {
     	if(i==1||i==n)printf("*");
     	 else printf(" ");
	 }
	 printf("\n");
   }
  
  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
