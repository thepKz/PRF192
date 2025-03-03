#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  
  int i, n, sum = 0;
    int hasOdd = 0;  // Flag to check if there are any odd numbers

    // Input the number of elements in the array
    scanf("%d", &n);

    int arr[n];

    // Input the elements of the array
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        // Check if the number is odd
        if (arr[i] % 2 != 0) {
            sum += arr[i];
            hasOdd = 1;
        }
    }
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
   if (hasOdd) {
        printf("%d", sum);  // Print the sum of odd numbers
    } else {
        printf("There are no odd numbers in %d elements", n);  // Print the message if no odd numbers found
    }
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
