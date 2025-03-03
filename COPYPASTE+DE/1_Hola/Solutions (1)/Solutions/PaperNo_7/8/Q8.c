#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int i,n;
    // Input the number of elements in the array
    scanf("%d", &n);

    int arr[n];
    int minOdd = INT_MAX, maxOdd = INT_MIN;
    int minOddIndex = -1, maxOddIndex = -1;

    // Input the elements of the array
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        // Check if the number is odd
        if (arr[i] % 2 != 0) {
            // Find the first smallest odd number
            if (arr[i] < minOdd) {
                minOdd = arr[i];
                minOddIndex = i;
            }
            // Find the first largest odd number
            if (arr[i] > maxOdd) {
                maxOdd = arr[i];
                maxOddIndex = i;
            }
        }
    }

    // Swap the smallest and largest odd numbers
    if (minOddIndex != -1 && maxOddIndex != -1) {
        int temp = arr[minOddIndex];
        arr[minOddIndex] = arr[maxOddIndex];
        arr[maxOddIndex] = temp;
    }
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  

for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
