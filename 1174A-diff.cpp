#include<bits/stdc++.h>
using namespace std;

long long n , ln , i , b[10000] , prefix[10000];
int main()
{
	cin>>n;
	ln = 2*n;
	for(i=1;i<=ln;i++)
	{
		cin>>b[i];
	}

	sort(b+1 , b+ln+1);

	prefix[0]=0;
	for(i=1;i<=ln;i++)
	{	
		prefix[i] = prefix[i-1] + b[i];
	}

	if(prefix[2*n]-prefix[n]==prefix[n])
	{
		cout<<"-1";
	}
	else
	{
		for(i=1;i<=ln;i++)
			cout<<b[i]<<" ";
	}

	return 0;
}