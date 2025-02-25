#include<stdio.h>
int main()
{
	char str[201];
	fgets(str,sizeof(str),stdin);
	
	
	int len = strlen(str);
	int i,j,minLen=201;
	int start=-1,end=-1;
	for(i=0;i<len;i++)
	 if(str[i]!=' '&& str[i]!='\n' &&(i==0||str[i-1]==' '))// da tim dc diem bat dau
	  {
	  	j=i;
	  	while(j<len&&str[j]!=' '&&str[j]!='\n')j++;// diem ket thuc
	  	
	  	if(j-i<minLen)
	  	 {
	  		minLen=j-i;
	  		start=i;
	  		end=j-1;
		  }
	  	
	  	
	  }
	  
	  for(i=start;i<=end;i++)
	   printf("%c",str[i]);
	   return 0;
	
	
}
