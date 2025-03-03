#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n,i,j;
  void swap(float *a, float *b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}


void sortDescending(float arr[], int n) {
    for ( i = 0; i < n - 1; ++i) {
        for ( j = 0; j < n - i - 1; ++j) {
            if (arr[j] < arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}
   
    float k;

    scanf("%d", &n);

    float array[n];
    float resultArray[n];
    int resultCount = 0;

    for ( i = 0; i < n; ++i) {
        scanf("%f", &array[i]);
    }
    scanf("%f", &k);

    for ( i = 0; i < n; ++i) {
        if (array[i] != k) {
            resultArray[resultCount++] = array[i];
        }
    }

    sortDescending(resultArray, resultCount);
  
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
    for ( i = 0; i < resultCount; ++i) {
        printf("%.1f ", resultArray[i]);
    }
  
  
  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
