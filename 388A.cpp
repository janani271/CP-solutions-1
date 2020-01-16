#include<bits/stdc++.h>
using namespace std;
long long n , i , a[200], c , res , h ;
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	c=0; res=0; h=0;
	while(c<n)
	{
		res++;
		h=0;
		for(i=0;i<n;i++)
		{
			if(a[i]>=h)
			{
				a[i]=-1;
				h++;
				c++;
			}
		}
	}
	cout<<res;
	return 0;
}