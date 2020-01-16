#include<bits/stdc++.h>
using namespace std;

long long n , i , x , y , mx;
vector<pair<long long, long long>>v; 

bool comp(pair<long long, long long>a,pair<long long, long long>b)
{
	if(a.first < b.first)
		return true;
	else if(a.first == b.first)
	{
		if(a.second < b.second)
			return true;
	}
	return false;
}

int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x>>y;
		v.push_back(make_pair(x,y));
	}
	sort(v.begin(),v.end(),comp);
	mx = 0;
	for(i=0;i<n;i++)
	{
		if( mx <= v[i].second)
		{
			mx = v[i].second;
		}
		else mx = v[i].first;
	}
	cout<<mx;
	return 0;
}