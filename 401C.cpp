#include<bits/stdc++.h>
using namespace std;
long long n , m, z , o , t;
int main()
{
	cin>>n>>m;
	//min no.of zeroes required
	if(m%2==0)
		z = m/2 - 1;
	else
		z = m/2;
	//min no.of ones required
	o = n-1;
	if(n<z || m<o)
	{
		cout<<"-1";
		return 0;
	}
	if(m>n) t=1;
	else t=0;
	while(n && m)
	{
		if(t)
		{
			if(m-2>=n)
			{
				cout<<"11";
				m -= 2;
			}
			else
			{
				cout<<"1";
				m -= 1;
			}
			 t--;
		}
		else
		{
			cout<<"0";
			n--;
			t++;
		}
	}
	if(t==0 && n!=0)
		cout<<"0";
	else if(t==1)
	{
		if(m==1) cout<<"1";
		else if(m==2) cout<<"11";
	}
	return 0;
}