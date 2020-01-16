#include<bits/stdc++.h>
using namespace std;
long long n , m , k , i , j, temp,r ;
vector<pair<long long, long long>>v;
int main()
{
	cin>>n>>m>>k;
	temp=k;
	for(i=1;i<=n;i++)
	{
		if(i%2==1)
		{
			for(j=1;j<=m;j++)
			{
				v.push_back(make_pair(i,j));
			}
		}
		if(i%2==0)
		{
			for(j=m;j>=1;j--)
			{
				v.push_back(make_pair(i,j));
			}
		}
	}
	for(auto it=v.begin();it!=v.end();++it)
	{
		if(k>1)
		{
			cout<<"2 ";
			cout<<it->first<<" "<<it->second<<" "<<(it+1)->first<<" "<<(it+1)->second<<"\n";
			++it;
			k--;
		}
		if(k==1)
		{
			r = ((n*m)-((temp-1)*2));
			cout<<r<<" ";
			for(auto itr = ((n*m)==r?it:it+1); itr!=v.end();++itr)
			{
				cout<<itr->first<<" "<<itr->second<<" ";
			}
			break;
		}
	}
	return 0;
}