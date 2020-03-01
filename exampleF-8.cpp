#include<stdio.h>
#include <string.h>
char str[100005], num;
void Fun(int i, int state)  
{  

	printf("i----->%dstate----->%d\n",i,state); 




  	int temp;  
  	if(i < 0)  
  	{  
	  	if(num != 0)  
	  	{  
	  		printf("%d", num);  
	 	}  
	  	return;  
 	}  
	if(state != 3)  
	{  
		temp = str[i] >= '0' && str[i] <= '9' ? str[i] - '0' : str[i] - 'A' + 10;  
		
		printf("temp->%d\n",temp);
		
		temp <<= state;  
		
		printf("temp--->%d\n",temp);
		num |= temp;  
		
		printf("num->%d\n",num);
		temp = num;  
		num >>= 3;  
		printf("num--->%d\n",num);
		Fun(i - 1, state + 1);  
		printf("%d", (temp & 1) + (temp & 2) + (temp & 4));  
	}  
	else  
	{  
		temp = num;  
		num >>= 3;  
		Fun(i, 0);  
		printf("%d", (temp & 1) + (temp & 2) + (temp & 4));  
	}  
}  
int main()  
{  
	  int n;  
	  scanf("%d", &n);  
	  while(n--)  
	  {  
		  num = 0;  
		  scanf("%s", str);  
		  Fun(strlen(str) - 1, 0);  
		  printf("\n");  
	  }  
	  return 0;  
}  
