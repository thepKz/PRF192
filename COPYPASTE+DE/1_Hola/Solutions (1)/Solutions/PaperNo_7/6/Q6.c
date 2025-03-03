#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int is_consonant(char ch) {
    ch = tolower(ch);  // Convert the character to lowercase for comparison
    // Check if the character is a letter and not a vowel
    return (ch >= 'a' && ch <= 'z') && !(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  
  
  char s[101];  // Array to hold the string, +1 for null terminator
    int consonant_word_count = 0;

    // Input the string
    fgets(s, 101, stdin);  // Use fgets to read the string including spaces
    s[strcspn(s, "\n")] = 0;  // Remove the newline character at the end if it exists

    // Tokenize the string and count words that start with a consonant
    char *word = strtok(s, " ");
    while (word != NULL) {
        if (is_consonant(word[0])) {
            consonant_word_count++;
        }
        word = strtok(NULL, " ");
    }
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
printf("%d", consonant_word_count);

  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
