#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  char s[101];  // Array to hold the string, +1 for null terminator

    // Input the string
    fgets(s, 101, stdin);  // Use fgets to read the string including spaces
    s[strcspn(s, "\n")] = 0;  // Remove the newline character at the end if it exists

    int i = 0;
    int capitalize_next = 1;  // Flag to determine if the next letter should be capitalized

    // Process the string
    while (s[i] != '\0') {
        if (isspace(s[i])) {
            capitalize_next = 1;  // Set flag to capitalize the next letter after a space
        } else if (capitalize_next && isalpha(s[i])) {
            s[i] = toupper(s[i]);  // Capitalize the current letter
            capitalize_next = 0;   // Reset the flag
        }
        i++;
    }
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
  
 printf("%s", s);
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
