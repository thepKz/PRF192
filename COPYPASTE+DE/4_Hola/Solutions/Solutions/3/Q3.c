#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int i, m, n, temp;
    int even_count = 0, odd_count = 0;

    scanf("%d", &m);

    scanf("%d", &n);


    if (m > n) {
        temp = m;
        m = n;
        n = temp;
    }

    for ( i = m; i <= n; ++i) {
        if (i % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  printf("%d\n", even_count);
    printf("%d\n", odd_count);
  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
