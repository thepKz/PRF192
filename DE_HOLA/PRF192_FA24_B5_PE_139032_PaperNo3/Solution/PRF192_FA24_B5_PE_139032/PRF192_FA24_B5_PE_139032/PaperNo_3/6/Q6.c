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
  
  int countAlpha=0, countDigits=0, countSpectical=0,i;
  for(i=0;i<strlen(str);i++)
   if(isalpha(str[i]))countAlpha++;
    else if(isdigit(str[i]) )countDigits++;
    else if(str[i]!='\n')  countSpectical++;
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  printf("%d\n",countAlpha);
  printf("%d\n",countDigits);
  printf("%d\n",countSpectical);
  

  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
