#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int isPerfect(int num) {
	int i; 
    int sum = 1; // Start with 1 because 1 is a divisor of every number
    if (num == 1) return 0; // 1 is not a perfect number
    for ( i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n,i;

  
    scanf("%d", &n);

    int array[n];
    int perfectCount = 0;

    for ( i = 0; i < n; ++i) {
        scanf("%d", &array[i]);
    }

    // Find the number of perfect numbers in the array
    for ( i = 0; i < n; ++i) {
        if (isPerfect(array[i])) {
            perfectCount++;
        }
    }
  
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
   if (perfectCount > 0) {
        printf("%d", perfectCount);
    } else {
        printf("There is no perfect number among the %d elements of the array\n", n);
    }
  
  
  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
