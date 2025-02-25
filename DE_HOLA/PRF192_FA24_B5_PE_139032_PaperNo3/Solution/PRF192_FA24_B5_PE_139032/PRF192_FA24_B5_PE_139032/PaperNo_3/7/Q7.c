#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  char str[100];
  fgets(str,sizeof(str),stdin);
  
  int upper=0,lower=0,special=0,i;
  
  for(i=0;i<strlen(str);i++)
   if(isupper(str[i]))upper++;
    else if(islower(str[i]))lower++;
     else if (str[i] !='\n') special++ ;
  
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  printf("Upper: %d\n",upper);
  printf("Lower: %d\n",lower);
  printf("Special: %d",special);
  
  
  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
