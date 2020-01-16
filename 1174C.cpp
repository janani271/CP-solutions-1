#include<bits/stdc++.h>
using namespace std;
long long n , i , j , prime_count , prime[1000000];
int main()
{
	cin>>n;

	for(i=2;i<=n;i++)
	{
		prime[i]=0;
	}

	prime_count=0;

	for(i=2;i<=n;i++)
	{
		if(prime[i]==0)
		{
			prime_count++;
			prime[i] = prime_count;
			//cout<<"\nprime count for "<<i<<" is "<<prime[i];
			for(j=i*i;j<=n;j+=i)
			{
				prime[j]=prime_count;
			//	cout<<"\nprime count for "<<j<<" is "<<prime[j];
			}
		}
	}

	for(i=2;i<=n;i++)
	{
		cout<<prime[i]<<" ";
	}
	return 0;
}