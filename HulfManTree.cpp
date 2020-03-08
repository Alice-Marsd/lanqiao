#include<stdio.h>
/***
循环那块有问题，待解决；
但是本方法较为复杂
不是该题的最优解 
最优解为创建一个队列
入队和出队操作方便
可以使用 #include<queue> 函数 
**/ 
int main()
{
	int a[100]={5,3,8,2,9};
	int i,n,j,x=0;
	int *pa,*pb;
//	scanf("%d",&n);
	n=5;
//	for(i=0;i<n;++i)
//	{
//		scanf("%d",&a[i]);
//	}

	for(i=0;i<n;++i)
	printf("%d\t",a[i]);
	printf("\n");
	while(n>0)
	{
		pa=a,pb=a+1;
		for(i=1;i<n;++i)
		{
			if(a[i]<=*pa)
			{
				pb=pa;				
				pa=a+i;	
			}else if(a[i]<=*pb)
			{
				pb=a+i;
			}
		}
		int sum=*pa+*pb;
		printf("%d + %d = %d\n",*pa,*pb,sum);
		i=0;
		while(n>i)
		{ 
			if(a+i==pa || a+i==pb)
			{
				for(j=i;j<n;++j)
				{
					a[j]=a[j+1];
					printf("%d\t",a[j]);
				}
			} 
			if(a+i==pa)
			{
				pb=pb-1;	
			}
			if(a+i==pb)
			{
				pa=pa-1;
			}
			
			printf("\n%d- - - - %d\n",i,a[i]); 
			++i;
				
		}
		--n;
		a[n-1]=sum;
		
		
		printf("<--------------------");
		for(i=0;i<n;++i)
		printf("%d\t",a[i]);
		printf("-------------------->\n");
		
	} 

	printf("-------------------\n");
	for(i=0;i<n;++i)
	printf("%d----%d\n",i,a[i]);
	
	
} 
