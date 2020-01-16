#include<bits/stdc++.h>
using namespace std;
long long n,m,i,k,p[200008],a[200002],ans[200002],q,c[102],diff;

int main()
{
	cin>>n>>m;
	p[0] = 0;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		p[i] = a[i]+p[i-1];
	}

	for(i=1;i<=n;i++)
	{
		ans[i]=0;
		if(p[i]>m)
		{
			diff = p[i]-m;
			for(k=100;k>0;k--)
			{
				q = k*c[k];
				//cout<<"\nq: "<<q;
				//cout<<"\nc of "<<k<<" : "<<c[k];
				if(diff<=q)
				{
					ans[i] += (diff+k-1)/k;
					break;
				}
				else
				{
					diff -= k*c[k];
					ans[i] += c[k];
				}
			}
		}
		c[a[i]]++;
	}

	for(i=1;i<=n;i++)
		cout<<ans[i]<<" ";
	return 0;
}