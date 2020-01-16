#include<bits/stdc++.h>
using namespace std;
int n , diff , c;
int main()
{
	cin>>n;
	diff=n-10;
	if(n==10)
	{
		c=0;
	}
	else if(diff==10)
	{
		c=15;
	}
	else if(diff>11 || n<10)
	{
		c=0;
	}
	else
	{
		c=4;
	}

	cout<<c;
	
	return 0;
}