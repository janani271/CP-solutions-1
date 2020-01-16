#include<bits/stdc++.h>
using namespace std;

long long n , i , a[100009] , u , v , visited[100009], max_val , dp[100009][3] , flag;
vector <long long> G[100009];

void dfs(long long x)
{
	visited[x]=1;
	flag=1;
	for(auto it=G[x].begin();it!=G[x].end();++it)
	{
		if(!visited[*it])
		{
			flag=0;
			break;
		}
	}

	if(flag)
	{
		dp[x][0]=0;
		dp[x][1]=a[x];
	}
	else
	{
		for(auto it=G[x].begin();it!=G[x].end();++it)
		{
			if(!visited[*it])
			{
				dfs(*it);
				dp[x][0] += max(dp[*it][0] , dp[*it][1]);
				dp[x][1] += dp[*it][0];
			}
		}

		dp[x][1] += a[x];
	}
}

int main()
{
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<=n-1;i++)
	{
		cin>>u>>v;
		G[u].push_back(v);
		G[v].push_back(u);
	}

	dfs(1);
	max_val = max(dp[1][0],dp[1][1]);
	cout<<max_val;
	
	return 0;
}