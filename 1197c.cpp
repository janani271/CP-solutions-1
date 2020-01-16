#include<bits/stdc++.h>
using namespace std;
vector<long long>v;
long long n , k , i , a[300007], dif , ans=0;
int main()
{
	cin>>n>>k;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	if(n==k)
	{
		cout<<"0";
		return 0;
	}
	for(i=0;i<n-1;i++)
	{
		dif = a[i+1]-a[i];
		v.push_back(dif);
	}
	ans -= a[0];
	ans += a[n-1];
	sort(v.begin(),v.end(),greater<>());
	for(i=0;i<k-1;i++)
	{
		ans -= v[i];
	}
	cout<<ans;
	return 0;
}