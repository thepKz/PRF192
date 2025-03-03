#include <stdio.h>
#include <string.h>
//---------------------------------------
void printEncodedString(char* s){
	//Begin your statements here
	int i; 
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
            s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
            s[i]++;
        }
    }
	printf("%s",s) ;      
	//End your statements
}
//=============DO NOT ADD NEW OR CHANGE STATEMENTS IN THE MAIN FUNCTION=============
int main() {
	system("cls");
  	printf("\nTEST Q4 (3 marks):\n");
    char s[101];
    printf("Enter the  string (s): ");
    scanf("%100[^\n]",s);   
	printf("OUTPUT:\n");
	printEncodedString(s);   
	printf("\n");
	system("pause");
    return 0;
}
//========================================================================
