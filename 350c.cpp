#include<bits/stdc++.h>
using  namespace std;
#define ll long long
long long n , i , x , y , ops;
pair<long long , long long>p;
vector<pair<long long, long long>>v;

bool comp(pair<long long , long long>a , pair<long long , long long>b)
{
	ll x1 = abs(a.first);
	ll y1 = abs(a.second);
	ll x2 = abs(b.first); 
	ll y2 = abs(b.second);
	if(x1<x2)
		return true;
	else if(x1==x2 && y1<y2)
		return true;
	return false;
}

int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x>>y;
		if(x!=0) ops+=2;
		if(y!=0) ops+=2;
		ops+=2;
		p = make_pair(x,y);
		v.push_back(p);
	}
	sort(v.begin(),v.end(),comp);
	cout<<ops<<"\n";
	for(auto it : v)
	{
		x = it.first;
		y = it.second;
		if(x>0)
			cout<<"1 "<<x<<" R\n";
		else if(x<0)
			cout<<"1 "<<-x<<" L\n";
		if(y>0)
			cout<<"1 "<<y<<" U\n";
		else if(y<0)
			cout<<"1 "<<-y<<" D\n";
		cout<<"2\n";
		if(x>0)
			cout<<"1 "<<x<<" L\n";
		else if(x<0)
			cout<<"1 "<<-x<<" R\n";
		if(y>0)
			cout<<"1 "<<y<<" D\n";
		else if(y<0)
			cout<<"1 "<<-y<<" U\n";
		cout<<"3\n";
	}	
	return 0;
}