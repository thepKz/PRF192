#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n,i;

    scanf("%d", &n);

    int prices[n];
    float totalPrices[n];

    for ( i = 0; i < n; ++i) {
        scanf("%d", &prices[i]);
    }

    for ( i = 0; i < n; ++i) {
        totalPrices[i] = prices[i] * 1.08; // 8% VAT
    }
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:

    for ( i = 0; i < n; ++i) {
        printf("%d - %.2f\n", i + 1, totalPrices[i]);
    }
  
  
  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
