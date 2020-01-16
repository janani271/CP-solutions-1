#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
long long n , m , i , j , ans;
set<char>res;
string s[109];
int main()
{
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		cin>>s[i];
	}

	ans = 1;
	for(i=0;i<m;i++)
	{
		res.clear();
		for(j=0;j<n;j++)
		{	
			res.insert(s[j][i]);
		}
		ans = ((ans%MOD)*(res.size()%MOD))%MOD;
	}
	cout<<ans;
	return 0;
}