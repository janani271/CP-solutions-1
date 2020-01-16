#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pairs pair<pair<ll,ll>,ll>
ll n , i , c , p , r[1009] , k , si , pos , tot;
vector<pair<ll,ll>>ans;
vector<pairs>v;
bool comp(pairs a, pairs b)
{
	if(a.first.second>b.first.second)
		return true;
	else if(a.first.second==b.first.second)
		return a.first.first<b.first.first;
	return false;
}
ll check(ll x)
{
	ll po,pre = 1002,flag=0;
	for(ll j=0;j<k;j++)
	{
		if(r[j]>=x)
		{
			flag=1;
			if(r[j]<pre)
			{
				pre = r[j];
				po = j;
			}
		}
	}
	if(flag)
	{
		r[po] = -1;
		return po;
	}
	return -1;
}
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>c>>p;
		v.push_back(make_pair(make_pair(c,p),i));
	}
	cin>>k;
	for(i=0;i<k;i++)
	{
		cin>>r[i];
	}
	sort(v.begin(),v.end(),comp);
	c=0;tot=0;
	for(i=0;i<n;i++)
	{
		if(c==k)
			break;
		si = (v[i].first).first;
		pos = check(si);
		if(pos!=-1)
		{
			c++;
			tot += (v[i].first).second;
			ans.push_back(make_pair((v[i].second)+1,pos+1));
			r[pos]=-1;
		}
	}
	cout<<c<<" "<<tot<<"\n";
	for(auto it:ans)
	{
		cout<<it.first<<" "<<it.second<<"\n";
	}
	return 0;
}