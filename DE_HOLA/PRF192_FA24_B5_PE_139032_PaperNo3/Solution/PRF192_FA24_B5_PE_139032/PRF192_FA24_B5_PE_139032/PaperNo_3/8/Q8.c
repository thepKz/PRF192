#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  
  int n,i,j,k;
  scanf("%d",&n);
  int a[n],count=0;
  for(i=0;i<n;i++)scanf("%d",&a[i]);
  
  
  

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for(i=0;i<n;i++)
  if(a[i]%2==0)
  {
  	count=0;
  	// dem co bao nhieu so a[i]
  	for(j=0;j<n;j++)
  	 if(a[i]==a[j])count++;
  	 
  	 
  	if(count>=2)
  	 {
	   printf("%d\n",a[i]);
	   for(k=0;k<n;k++)
	    if(a[k]==a[i])a[k]=1;// cho tat ca cac so a[i] =1 de khong dem lai
	   
  		
	  }
  	
  	
  }
  
  
  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
