#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef pair<int,int> pa;
pa l[10001];
int n;
bool cmp(pa a,pa b) {
    if(a.second == b.second)return a.first < b.first;
    return a.second < b.second;
}
bool check(int d) {
    bool vis[100001] = {false};
    int last = 0,j = 0;///已经合并区间的最右端点
    for(int i = 0;i < n && last < 20000;i += (j == i),j = i) 
	{
        while(j < n && (vis[j] || l[j].first - last > d) ) j ++;///找到满足当前标准的左端点靠前的区间
        if(j >= n) return false;
    
        vis[j] = true;
        
        if(last - l[j].first >= d) 
			last = max(last,l[j].second + d);///重叠部分比d大，最多往右移动d
        else 
		{	///新区间接在了last后面
            last += l[j].second - l[j].first;
        }
    }
    return last >= 20000;
}
int main() {
    scanf("%d",&n);
    for(int i = 0;i < n;i ++) {
        scanf("%d%d",&l[i].first,&l[i].second);
        l[i].first *= 2;
        l[i].second *= 2;
    }
    sort(l,l + n,cmp);
    int l = 0,r = 20000;
    while(l < r) {//二分寻找最合适标准
    
        int mid = (l + r) / 2;
        if(check(mid)) r = mid;
        else l = mid + 1;
    }
    if(l % 2) printf("%.1f",l / 2.0);
    else printf("%d",l / 2);
    return 0;
}
