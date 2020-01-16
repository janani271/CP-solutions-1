#include<bits/stdc++.h>
using namespace std;
long long n , i , j , k , a[105] , b[105];
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	i=0; k=0; j=n-1;
	while(i<n)
	{
		if(i%2==0)
		{
			b[k]=a[i];
			k++;
		}
		else
		{
			b[j]=a[i];
			j--;
		}
		i++;
	}
	for(i=0;i<n;i++)
		cout<<b[i]<<" ";
	return 0;
}