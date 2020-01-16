#include<bits/stdc++.h>
using namespace std;
long long i , n , k , j;
int main()
{
	cin>>n;
	for(i=0;i<=n;i++)
	{
		//spaces before no.s
		for(j=0;j<=2*(n-i)-1;j++)
			cout<<" ";
		//numbers until i
		for(k=0;k<=i;k++)
		{
			if(i!=0)cout<<k<<" ";
			else cout<<k;
		}
		//numbers from i-1 to 0
		for(k=i-1;k>=0;k--)
		{	
			if(i-1<n && k!=0)
				cout<<k<<" ";
			else
				cout<<k;
		}
		//spaces after numbers
		// for(j=0;j<=2*(n-i)-1;j++)
		// {
		// 	if(i!=0 || j<2*(n-i)-1)
		// 		cout<<" ";
		// }
		cout<<"\n";
	}

	//second half

	for(i=1;i<=n;i++)
	{
		//spaces before no.s
		for(j=1;j<=2*i;j++)
			cout<<" ";
		//numbers until i
		for(k=0;k<=(n-i);k++)
		{
			if(i<n || k<(n-i))
			cout<<k<<" ";
			else cout<<k;
		}
		//numbers from i-1 to 0
		for(k=(n-i-1);k>=0;k--)
		{	
			if(k>0)cout<<k<<" ";
			else cout<<k;
		}
		//spaces after numbers
		// for(j=1;j<2*i;j++)
		// {
		// 	cout<<" ";
		// }
		cout<<"\n";
	}

	return 0;
}