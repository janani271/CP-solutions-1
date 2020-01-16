#include<bits/stdc++.h>
using namespace std;
long long n , maxn , maxp , minp , a[100009] , nn , pp ,i , maxin=0 , maxip=0 , minip=1000008;
int main()
{
	cin>>n; 
	for(i=0;i<n;i++)
	{
		cin>>a[i]; 
		if(a[i]>=0)
			a[i] = (a[i]*(-1))-1; 
		if(a[i]<maxin)
		{
			maxn = i;
			maxin = a[i];
		}
	}
	if(n%2==1)
		a[maxn] = (a[maxn]*(-1))-1;
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}