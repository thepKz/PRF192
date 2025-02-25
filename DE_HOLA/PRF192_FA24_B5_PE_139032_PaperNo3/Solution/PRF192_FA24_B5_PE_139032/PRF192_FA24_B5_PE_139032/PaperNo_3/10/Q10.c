#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int binaryToDecimal(char bit[])
{
	int dec=0,i;
	for(i=0;i<strlen(bit);i++)
	 dec=dec*2+(bit[i] -'0');
	return dec;
}

int main() {
	
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  char bit[17];
  scanf("%s",bit);
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  printf("%d",binaryToDecimal(bit));
  
  
  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
