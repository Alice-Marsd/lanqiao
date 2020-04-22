//#include<stdio.h>
//int main()
//{
//	int n ,k,i;
//	int a[100001]={0};
//	scanf("%d%d",&n,&k);
//	for(i=0;i<n;++i)
// 	scanf("%d",&a[i]);
//	long long  sum[10007]={0};
//	sum[0]=a[0]%k;
//	for(i=1;i<n;++i)
//	{
//		sum[i]=(sum[i-1]+a[i])%k;
//	}
//	long long count=0;
//	long long visit[10007]={0};
//	for( i=1;i<=n;++i)
//	{
//		count+=visit[sum[i-1]];
//		visit[sum[i-1]]++;
//	}
//	printf("%d",count+visit[0]);
//}
#include<stdio.h>
int main()
{
	int n,k,a[100007],i;
	    scanf("%d%d",&n,&k);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	long long sum[100007]={0};
	sum[1]=a[1]%k;
	for(i=2;i<=n;i++)
		sum[i]=(sum[i-1]+a[i])%k;
	long long vis[100007]={0};    //    该数组是记录有多少个相同的区间和
	long long ans=0;
	for(i=1;i<=n;i++){
		ans+=vis[sum[i]];
		vis[sum[i]]++;
	}
		printf("%lld",ans+vis[0]);    
        //ans记录的是 不从第一个元素开始的区间的相同的个数
        //加上vis[0]是因为要记录从从第一个分别到第i个的区间中取模k 为 0的个数
	return 0;
 } 

