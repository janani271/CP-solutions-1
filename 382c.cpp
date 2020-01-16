#include<bits/stdc++.h>
using namespace std;
long long n , i , a[100005], d , c , pos , val, flag;
set<long long>s; 
int main()
{
	flag=1;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(i>0 && a[i]!=a[i-1])
			flag=0;
	}
	if(flag && n!=1)
	{
		cout<<"1\n"<<a[0];
		return 0;
	}
	if(n==1)
	{
		cout<<"-1";
		return 0;
	}
	sort(a,a+n);
	if(n==2)
	{
		if((a[0]+a[1])%2==0)
		{
			cout<<"3\n";
			cout<<a[0]-(a[1]-a[0])<<" ";
			cout<<(a[0]+a[1])/2<<" ";
			cout<<a[1]+(a[1]-a[0]);
		}
		else
		{
			cout<<"2\n";
			cout<<a[0]-(a[1]-a[0])<<" ";
			cout<<a[1]+(a[1]-a[0]);	
		}
		return 0; 
	}

	d = a[1]-a[0]; c=0;
	//to check if in ap
	for(i=2;i<n;i++)
	{
		if(a[i]-a[i-1]!=d)
		{
			c++;
			pos = i;
			s.insert(a[i]-a[i-1]);
		}
	}
	if(c==0)
	{
		cout<<"2\n";
		cout<<a[0]-(a[1]-a[0])<<" ";
		cout<<a[n-1]+(a[1]-a[0]);
		return 0;
	}
	if(c==1)
	{
		if(n==3)
		{
			if(a[1]-a[0] == 2*(a[2]-a[1]))
			{
				cout<<"1\n";
				cout<<(a[1]+a[0])/2;
			}
			else if(a[2]-a[1] == 2*(a[1]-a[0]))
			{
				cout<<"1\n";
				cout<<(a[1]+a[2])/2;
			}
			else
				cout<<"0";
		}
		else
		{
			if((a[pos]+a[pos-1])%2==0)
			{
				val = (a[pos]+a[pos-1])/2;
				if(a[pos]-val==d)
				{
					cout<<"1\n"<<val;
				}
				else cout<<"0";
			}
			else cout<<"0";
		}
		return 0;
	}
	if(c==n-2)
	{
		if(s.size()==1)
		{	
			auto it = s.begin();
			pos=1;
			if((a[pos]+a[pos-1])%2==0)
			{
				val = (a[pos]+a[pos-1])/2;
				if(a[pos]-val==*it)
				{
					cout<<"1\n"<<val;
				}
				else cout<<"0";
			}
			else cout<<"0";
		}
		else cout<<"0";
	}
	else cout<<"0";
	return 0;
}
