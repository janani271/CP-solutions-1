#include<bits/stdc++.h>
using namespace std;
long long n , p , i , m , dist ,c, d,mark[100007];
string s;
char a , b;
set<long long>pos;

long long calc_dist1(long long x , long long y)
{
	long long z = 0 , temp = y;
	while(temp>=x)
	{
		if(mark[temp]==1)
		{
			z = (y-temp);
		}
		temp--;
	}
	//cout<<"x : "<<x<<"\ty: "<<y<<"\tz: "<<z<<"\n";
	return z;
}

long long calc_dist(long long x , long long y)
{
	long long z = 0 , temp = x;
	while(temp<=y)
	{
		if(mark[temp]==1)
		{
			z = (temp-x);
		}
		temp++;
	}
	//cout<<"x : "<<x<<"\ty: "<<y<<"\tz: "<<z<<"\n";
	return z;
}

int main()
{
	cin>>n>>p;
	cin>>s;
	m=0;
	for(i=0;i<n/2;i++)
	{
		if(s[i]!=s[n-i-1])
		{
			a = s[i];
			b = s[n-i-1];
			dist = abs((int)a - (int)b);
			m += min(dist,26-dist);
			mark[i]=1;
			mark[n-i-1]=1;
		}
	}

	p = p-1;

	if(n%2==1)
	{
		if(p==n/2)
		{
			c = calc_dist1(0,p);
			d = 0; 
		}
		else if(p < n/2)
		{
			c = calc_dist1(0,p);
			d = calc_dist(p,n/2);
		}
		else
		{
			c = calc_dist1(n/2,p);
			d = calc_dist(p,n-1); 
		}
		m += (c+d+min(c,d));
	}
	else
	{
		if(p < n/2)
		{
			c = calc_dist1(0,p);
			d = calc_dist(p,(n/2)-1);
		}
		else
		{
			c = calc_dist1(n/2,p);
			d = calc_dist(p,n-1); 
		}
		m += (c+d+min(c,d));	
	}

	cout<<m;

	return 0;
}