#include<bits/stdc++.h>
using namespace std;
long long n , m , i , j , a[102] , t[102],ans[102] , maxi , p , val ;
int main()
{
	cin>>n>>m;
	for(i=1;i<=n;i++)
	{
		cin>>t[i];
		a[i] = t[i];
	}
	ans[1] = 0;
	for(i=2;i<=n;i++)
	{
		maxi = m-t[i];
		sort(a+1,a+i);
		p=0; val=0;
		for(j=1;j<=i-1;j++)
		{
			if(val + a[j] <= maxi)
			{
				val += a[j];
				p+=1;
			}
		}
		ans[i] = (i-1) - p;
	}
	for(i=1;i<=n;i++)
	{
		cout<<ans[i]<<" ";
	}
	return 0;
}