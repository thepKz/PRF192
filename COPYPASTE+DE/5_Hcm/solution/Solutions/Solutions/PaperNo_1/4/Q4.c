#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 100

char* lTrim(char* s);
char* rTrim(char* s);
char* trim(char* s);
int countCharacter(char* str,char ch);
//=============DO NOT ADD NEW OR CHANGE STATEMENTS IN THE MAIN FUNCTION=============
int main() {
	system("cls");
	printf("\nTEST Q4 (3 marks):\n");
	char str[51], ch;
	printf("Please enter a string: ");
	scanf("%50[^\n]", str);
	fflush(stdin);
	printf("Please enter a character: ");
	scanf("%c",&ch);
	trim(str);
	printf("\nOUTPUT:\n");
	printf("%d",countCharacter(str,ch));
	printf("\n");
	system("pause");
	return 0;
}
//===================================================================================
int countCharacter(char* str,char ch) {
	//Begin your codes here=====================
	int count = 0;
	int len = strlen(str);
	int i; 
    ch = tolower(ch);

    for (i = 0; i < len; i++) {
        if (tolower(str[i]) == ch) {
            count++;
        }
    }
	return count;
	//End your codes============================
}
//-----------------------------------------------------------
//=== Do not add new or change statements in the function.===
char* lTrim(char* s) {
	int i = 0;
	while (s[i] == ' ')	i++;
	if (i > 0) strcpy(&s[0], &s[i]);
	return s;
}
//-----------------------------------------------------------
//=== Do not add new or change statements in the function.===
char* rTrim(char* s) {
	int i = strlen(s)-1;
	while (s[i] == ' ') i--;
	s[i+1] = '\0';
	return s;
}
//-----------------------------------------------------------
//=== Do not add new or change statements in the function.===
char* trim(char* s) {
	rTrim(lTrim(s));
	char *ptr = strstr(s, "  ");
	while (ptr != NULL) {
		strcpy(ptr, ptr+1);
		ptr = strstr(s, "  ");
	}
	return s;
}

