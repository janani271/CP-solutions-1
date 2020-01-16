#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll n , m , i , j , t[1005], l[1005], res[1005], a[1005], r[1005];
bool re; 

bool check(ll x ,ll y)
{
	for(ll k=x+1;k<=y;k++)
	{
		if(res[k-1]-res[k]>0)
			return true;
	}
	return false;
}

int main()
{
	cin>>n>>m;
	for(i=0;i<m;i++)
	{
		cin>>t[i]>>l[i]>>r[i];
		--r[i]; --l[i];
		if(t[i]==1)
		{
			//cout<<"l : "<<l[i]<<"\tr: "<<r[i]<<"\n";
			for(j=l[i]+1;j<=r[i];j++)
				a[j] = 1;
		}
	}

	res[1]=n+1;
	for(i=1;i<n;i++)
	{
		if(a[i])
		{
			res[i+1] = res[i];
		}
		else res[i+1] = res[i]-1;
	}

	// for(i=0;i<n;i++)
	// {
	// 	cout<<a[i]<<" ";
	// }
	//cout<<"\n";

	for(i=0;i<m;i++)
	{
		re = check(l[i]+1,r[i]+1);
		if(t[i]==1 && re)
		{
			cout<<"NO";
			return 0;
		}
		else if(t[i]==0 && !re)
		{
			cout<<"NO";
			return 0;
		}
	}

	cout<<"YES\n";
	for(i=1;i<=n;i++)
	{
		cout<<res[i]<<" ";
	}
	return 0;
}