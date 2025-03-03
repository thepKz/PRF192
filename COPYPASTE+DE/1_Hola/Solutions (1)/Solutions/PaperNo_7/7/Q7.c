#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int i,j,n;
    // Input the number of elements in the array
    scanf("%d", &n);

    int arr[n];
    int frequency[n];
    int index = 0;

    // Initialize the frequency array with 0
    for (i = 0; i < n; i++) {
        frequency[i] = 0;
    }

    // Input the elements of the array
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Process the array to find numbers divisible by 3 and their frequencies
    for (i = 0; i < n; i++) {
        if (arr[i] % 3 == 0) {
            int found = 0;
            // Check if the number is already counted
            for (j = 0; j < index; j++) {
                if (arr[i] == arr[j]) {
                    frequency[j]++;
                    found = 1;
                    break;
                }
            }
            if (!found) {
                arr[index] = arr[i];
                frequency[index] = 1;
                index++;
            }
        }
    }
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
for (i = 0; i < index; i++) {
        printf("%d-%d\n", frequency[i], arr[i]);
    }



  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
