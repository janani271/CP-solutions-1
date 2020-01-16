#include<bits/stdc++.h>
using namespace std;
long long t , n , ec , oc , ei , oi , i , a , even[300005], odd[300005], res[300005]; 
string s;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>s;
		n = s.length();
		ec=0; oc=0;
		memset(even,0,sizeof(even));
		memset(odd,0,sizeof(odd));
		for(i=0;i<n;i++)
		{
			a = s[i]-'0';
			if(a%2==0)
				even[ec++]=a;
			else odd[oc++]=a;
		}
		i=0; ei=0; oi=0;
		while(i<n && ei<ec && oi<oc)
		{
			if(even[ei]<=odd[oi])
			{
				res[i++] = even[ei++];
			}
			else 
			{
				res[i++] = odd[oi++];
			}
		}
		while(ei<ec)
		{
			res[i++]=even[ei++];
		}
		while(oi<oc)
		{
			res[i++]=odd[oi++];
		}
		for(i=0;i<n;i++)
			cout<<res[i];
		cout<<"\n";
	}

	return 0;
}