#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 100

char* lTrim(char* s);
char* rTrim(char* s);
char* trim(char* s);
void clear();
int countWords(char* s, char* k);
//============== Do not add new or change statements in the main function.========
int main(int argc, char *argv[]) {	
	system("cls");
	printf("\nTEST Q4 (3 marks):\n");
	char s[21], k[21];	
	printf("Please enter string s: ");
	scanf("%20[^\n]",s);
	trim(s);
	strlwr(s);	
	clear();	
	printf("Please enter string k: ");
	scanf("%20[^\n]",k);
	trim(k);
	strlwr(k);
	//=== The output will be used to mark your program.===============
	printf("\nOUTPUT:\n");
	printf("%d",countWords(s,k));
	printf("\n");
	system ("pause");
	return 0;
}
//==============================================
int countWords(char* s, char* k) {
	//Begin your statements here=====================

     int lenS= strlen(s);
     int lenK= strlen(k);
     int count=0;
     int i,j,flag;
     for( i=0;i<lenS;i++)
      {
      	flag =1;// kiem tra chuoi con nay co = k
      	for( j=0;j<lenK;j++)
      	{	  
      	 if(i+j>=lenS) break;
      	 
      	 if(k[j]!= s[i+j])
		   { flag= 0;
		    break;		   
		   }// chi can 1 ki tu khong khop thi la sai
	    }
		   
      	
		  if(flag==1) count++;// khop 
	  }
   return count;

	//End your statements============================
}
//=== Do not add new or change statements in this function.===
void clear(){
	char c;
	while((c = getchar())!='\n');
}
//=== Do not add new or change statements in this function.===
char* lTrim(char* s) {
	int i = 0;
	while (s[i] == ' ')	i++;
	if (i > 0) strcpy(&s[0], &s[i]);
	return s;
}
//=== Do not add new or change statements in this function.===
char* rTrim(char* s) {
	int i = strlen(s)-1;
	while (s[i] == ' ') i--;
	s[i+1] = '\0';
	return s;
}
//=== Do not add new or change statements in this function.===
char* trim(char* s) {
	rTrim(lTrim(s));
	char *ptr = strstr(s, "  ");
	while (ptr != NULL) {
		strcpy(ptr, ptr+1);
		ptr = strstr(s, "  ");
	}
	return s;
}

