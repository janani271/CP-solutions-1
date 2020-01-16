#include<bits/stdc++.h>
using namespace std;

long long n , i , t , p , a[40003]; 

int main()
{
	cin>>n>>t;;
	for(i=1;i<n;i++)
	{
		cin>>a[i];
	}
	
	for(i=1;i<=n;i+=a[i])
	{
		if(i==t)
		{
			cout<<"YES";
			break;
		}
		else if(i>t)
		{
			cout<<"NO";
			break;
		}
	}
}
