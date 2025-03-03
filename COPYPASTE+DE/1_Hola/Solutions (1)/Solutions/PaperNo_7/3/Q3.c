#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  
  int n;
    scanf("%d", &n);  // Reading the number of elements

    int arr[n];
    int evenArr[n];
    int evenCount = 0;

    int i; 
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        // Check if the number is even
        if (arr[i] % 2 == 0) {
            evenArr[evenCount++] = arr[i];
        }
    }

    // Sort the even numbers array
    qsort(evenArr, evenCount, sizeof(int), compare);
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
  for (i = 0; i < evenCount; i++) {
        printf("%d\n", evenArr[i]);  // Print each even number on a new line
    }
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
