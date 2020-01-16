#include<bits/stdc++.h>
using namespace std;
long long n , ans , dp[4002][5] , l[5];

long long cut(long long len, long long x)
{
	// cout<<"len : "<<len<<"\n";
	// cout<<"x : "<<l[x]<<"\n";

	if(dp[len][x]!=-1)
		return dp[len][x];
	if(len-l[x]==0)
		return dp[len][x]=1;
	else if(len-l[x]<0)
		return dp[len][x]=-4001;
	dp[len][x] = max(cut(len-l[x],0),max(cut(len-l[x],1),cut(len-l[x],2))) + 1;
	
	//cout<<"val : "<<dp[len][x]<<"\n\n";
	
	return dp[len][x];
}

int main()
{
	cin>>n>>l[0]>>l[1]>>l[2];

	memset(dp,-1,sizeof(dp));
	
	ans = max(cut(n,0),max(cut(n,1),cut(n,2)));
	
	cout<<ans;
	return 0;
}