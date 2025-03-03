#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	void replaceSubstring(char *s1, const char *s2, const char *s3) {
    char buffer[1024]; // Assuming the result will fit in this buffer
    char *pos;
    int index = 0;
    int s2_len = strlen(s2);
    int s3_len = strlen(s3);

    buffer[0] = '\0';

    while ((pos = strstr(s1, s2)) != NULL) {
        // Copy part before the match
        int len = pos - s1;
        strncat(buffer, s1, len);

        // Append the replacement
        strcat(buffer, s3);

        // Move past the match
        s1 = pos + s2_len;
    }
	 strcat(buffer, s1);

    // Copy the result back to s1
    strcpy(s1, buffer);
}	
char s1[1024], s2[100], s3[100];

    // Enter the strings
    printf("Enter string s1: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = 0; // Remove the newline character

    printf("Enter string s2: ");
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = 0; // Remove the newline character

    printf("Enter string s3: ");
    fgets(s3, sizeof(s3), stdin);
    s3[strcspn(s3, "\n")] = 0; // Remove the newline character

    // Replace substring s2 in s1 with s3
    replaceSubstring(s1, s2, s3);


  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
  printf("Modified string s1: %s\n", s1);
  
  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
