#include<bits/stdc++.h>
using namespace std;
long long n , vis , i , pos , a[100009], flag;
int main()
{
	cin>>n;
	vis=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]<a[i-1] && i>0 && vis==0)
		{
			pos=i;
			vis=1;
		}
	}
	if(!vis)
	{
		cout<<"0";
		return 0;
	}
	flag=1;
	for(i=pos;i<n;i++)
	{
		if(a[i]<a[i-1] && i>pos)
		{
			flag=0; break;
		}
	}
	if(flag && a[n-1]<=a[0])
		cout<<(n-pos);
	else cout<<"-1";
	return 0;
}