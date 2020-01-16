#include<bits/stdc++.h>
using namespace std;
#define m 1000000007
long long n , k , i , j , c , sum , dp[2005][2005];
int main()
{
	cin>>n>>k;

	for(j=1;j<=n;j++)
		dp[1][j]=1;

	for(i=1;i<k;i++)
	{
		for(j=1;j<=n;j++)
		{
			for(c=j;c<=n;c+=j)
			{
				dp[i+1][c] = ((dp[i+1][c]%m)+(dp[i][j]%m))%m;
			}
		}
	}

	for(j=1;j<=n;j++)
	{
		//cout<<"\t"<<dp[k][j];
		sum = ((sum%m)+(dp[k][j]%m))%m;
	}
	//cout<<endl;
	cout<<sum;
	return 0;
}