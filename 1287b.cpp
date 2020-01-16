#include<bits/stdc++.h>
using namespace std;
long long n , k , i , j , ans , g , cn; 
string f[2500] , a , b , res;
map<char,long long>c;
map<string,long long>m;
int main()
{
	cin>>n>>k;
	for(i=0;i<n;i++)
	{
		cin>>f[i];
		m[f[i]]=i;
	}
	c['S']=0;
	c['E']=1;
	c['T']=2;
	ans=0;
	for(i=0;i<n-2;i++)
	{
		for(j=i+1;j<n-1;j++)
		{
			a = f[i];
			b = f[j];
			res="";
			for(g=0;g<k;g++)
			{
				cn = (3 - ((c[a[g]]+c[b[g]])%3))%3;
				if(cn==0)
					res += 'S';
				else if(cn==1)
					res += 'E';
				else res += 'T';
			}
			if(m[res]!=0 && m[res]>j)
			{
				//cout<<"a: "<<a<<"\tb: "<<b<<"\tres: "<<res<<"\n";
				ans++;
			}
			// cout<<"i: "<<i<<"\tj: "<<j<<"\tk : "<<k<<"\n";		
		}
	}
	cout<<ans;
	return 0;
}