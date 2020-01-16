#include<bits/stdc++.h>
using namespace std;
long long n , m , i , a[200008] , cost[200008] , prefix[200008];
int main()
{
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	cost[0]=a[0];
	prefix[0]=a[0];
	for(i=1;i<n;i++)
	{
		prefix[i]=prefix[i-1]+a[i];
		if(i<m)
		{
			cost[i]=prefix[i];
		}
		else
		{
			cost[i]=prefix[i]+cost[i-m];
		}
	}
	for(i=0;i<n;i++)
		cout<<cost[i]<<" ";
	return 0;
}