#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  int i,j,n; 
	void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to sort an array in descending order
void sortDescending(int arr[], int n) {
    for ( i = 0; i < n - 1; ++i) {
        for ( j = 0; j < n - i - 1; ++j) {
            if (arr[j] < arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}
  scanf("%d", &n);
	int array[n];
    int oddArray[n];
    int oddCount = 0;

    for (i = 0; i < n; ++i) {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < n; ++i) {
        if (array[i] % 2 != 0) {
            oddArray[oddCount++] = array[i];
        }
    }
    sortDescending(oddArray, oddCount);
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
    for (i = 0; i < oddCount; ++i) {
        printf("%d ", oddArray[i]);
    }
  
  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
