#include<bits/stdc++.h>
using namespace std;
long long n , i , a[104],p[105];
int main()
{
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i];
	sort(a+1,a+n+1);
	p[0]=0;
	for(i=1;i<=n;i++)
	{
		p[i] = p[i-1]+a[i];
	}
	for(i=n;i>=1;i--)
	{
		if(p[n]-p[i-1]>p[i-1])
		{
			cout<<(n-i+1);
			break;
		}
	}
}