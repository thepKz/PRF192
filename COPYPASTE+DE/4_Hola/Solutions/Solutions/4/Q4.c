#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int i,j,k,n;

    
    scanf("%d", &n);

    
    
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for (i = 1; i <= n; i++) {
        
        for (j = n; j > i; j--) {
            printf("  ");
        }
        // Print numbers
        for (k = 1; k <= (2 * i - 1); k++) {
            printf("%d ", k);
        }
        
        printf("\n");
    }
  
  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
