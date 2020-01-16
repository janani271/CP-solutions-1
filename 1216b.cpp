#include<bits/stdc++.h>
using namespace std;
#define pairs pair<long long , long long>
long long n , i , a[1009], x, ans;

bool comp(pairs a, pairs b)
{
	if(a.first>b.first)
		return true;
	return false;
}

vector<pairs>v;
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		v.push_back(make_pair(a[i],i+1));
	}
	sort(v.begin(),v.end(),comp);
	x = 1; ans=1;
	for(i=1;i<n;i++)
	{
		ans += ((v[i].first)*x)+1;
		x++;
	}
	cout<<ans<<endl;
	for(i=0;i<n;i++)
	{
		cout<<v[i].second<<" ";
	}
	return 0;
}