#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n , m , d , i , j , k , a[10005] , ans=999999999; 
ll calc(ll x)
{
	ll mov=0;
	x = a[x];
	for(i=0;i<k;i++)
	{
		mov += abs(a[i]-x)/d;
	}
	//cout<<"x : "<<x<<" moves : "<<mov<<"\n";
	return mov;
}

int main()
{
	cin>>n>>m>>d;
	k=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>a[k++];
		}
	}
	sort(a,a+k);
	for(i=1;i<k;i++)
	{
		if((a[i]-a[0])%d!=0)
		{
			cout<<"-1";
			return 0;
		}
	}

	// for(j=0;j<k;j++)
	// {
	// 	ans = min(ans,calc(j));
	// }

	if(k%2==1)
	{
		//cout<<"odd\n";
		ans = calc((k/2));
	}
	else
	{
		//cout<<"even\n";
		ans = min(calc(k/2),calc((k/2)+1));
	}
	
	cout<<ans;
	return 0;
}