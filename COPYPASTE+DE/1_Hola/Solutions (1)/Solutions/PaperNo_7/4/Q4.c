#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  
  int i, j, rows;
    char alphabet = 'A';

    // Input the number of rows
    scanf("%d", &rows);
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
 for( i = 0; i < rows; i++) {
        for( j = 0; j < (rows - i); j++) {
            printf("%c ", alphabet);
            alphabet++;
        }
        printf("\n");
    }

  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
