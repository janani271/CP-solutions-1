#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n , m , k , low , high , mid , i , ans , c;
int main()
{
	cin>>n>>m>>k;
	low = 1;
	high = 250000000000;
	ans = -1;
	while(low<=high)
	{
		mid = (low+high)/2;
		c=0;
		for(i=1;i<=n;i++)
		{
			c += min(m,(mid-1)/i);
		}
		if(c<k)
		{
			low = mid+1;
			if(mid>ans)
				ans = mid;
		}
		else if(c>=k)
			high = mid-1;
	}
	cout<<ans;
	return 0;
}