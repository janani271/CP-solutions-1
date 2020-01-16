#include<bits/stdc++.h>
using namespace std;
#define m 1000000007
long long n , i , prefix[1009], c[1009], p[1009];
int main()
{
	cin>>n;
	prefix[0]=0;
	for(i=1;i<=n;i++)
	{
		cin>>p[i];
		c[i] = ((prefix[i-1]%m) - (prefix[p[i]-1]%m) + 2 +m)%m;
		prefix[i] = ((prefix[i-1]%m) + (c[i]%m))%m;
	}
	cout<<prefix[n];
	return 0;
}