#include<bits/stdc++.h>
using namespace std;
long long n , a[1000000] , even_count , odd_count , i ;
int main()
{
	cin>>n;
	even_count = 0; odd_count=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]%2==0)
			even_count++;
		else
			odd_count++;
	}

	if(even_count==n || odd_count==n)
	{
		for(i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
	}
	else
	{
		sort(a,a+n);
		for(i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
	}
	return 0;
}