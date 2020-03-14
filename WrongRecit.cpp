#include<stdio.h>
int main()
{
	int n,i,j,cnt=0,x=0;
	char a[100];
	int aa[100];
	scanf("%d",&n);
	for(i=0;i<n;++i)
	{
		printf("µÚ%dÐÐ£º",i);
		scanf("%s",&a);
		for(j=0;a[j];++j)
		{
			if(a[j]-' ')
			{
				x=a[j]-'0'+x;
			}else
			{
				if(x)
				{
					printf("%d\n",x);
					aa[cnt]=x;
					
					++cnt;
					x=0;
				}
					
			}
		}
	}
	
	for(i=0;i<cnt;++i)
	{
		printf("%d\t",aa[i]);
	}
	
}
