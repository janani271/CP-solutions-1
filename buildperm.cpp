#include<bits/stdc++.h>
using namespace std;
long long n , i , a[1000000] , c;
int main()
{
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);

	 //for(i=1;i<=n;i++)
	 	//cout<<"\ni: "<<a[i];
	 //cout<<"\n";
	
	c=0;
	
	for(i=1;i<=n;i++)
	{
		c = c + abs(i-a[i]);
		
		//cout<<"\n c upto "<<i<<" : "<<c;
		
		a[i]=i;
	}

	//cout<<"\n";
	
	cout<<c;
	return 0;
}