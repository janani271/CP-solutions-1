#include<bits/stdc++.h>
using namespace std;
long long n , i , a[109], c,one , more,res[105];
map<long long, long long>m;
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		m[a[i]]++;
	}

	for(auto it=m.begin();it!=m.end();++it)
	{
		if(it->second==1)
			one++;
		else if(it->second > 2)
		 more++;
	}

	if(one%2==1 && more==0)
		cout<<"NO";
	else
	{
		c=0;
		memset(res,-1,sizeof(res));
		for(i=0;i<n;i++)
		{
			if(m[a[i]]==1)
			{
				res[i]=c;
				c = 1-c;
			}
		}
		for(i=0;i<n;i++)
		{
			if(res[i]==-1)
			{
				if(m[a[i]]>2 && c==1)
				{
					res[i] = c;
					c = 1-c;
				}
				else res[i]=0;
			}
		}


		cout<<"YES\n";
		for(i=0;i<n;i++)
		{
			if(res[i]==0)
			cout<<"A";
			else cout<<"B"; 
		}
	}

	return 0;
}