#include<bits/stdc++.h>
using namespace std;
long long n , i , a[200009] , flag , diff[200009] , c , d , ans ; 
map<long long,long long>p;
int main()
{
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		p[a[i]]=i;
	}
	if(n==2 || n==3)
		cout<<"1";
	else
	{
		sort(a+1,a+n+1); 
		flag=1;
		for(i=3;i<=n;i++)  //without 1st element
		{
			diff[i] = a[i] - a[i-1];
			if(diff[i]!=diff[i-1] && i>=4)
			{
				flag = 0; 
				break;
			}
		}
		if(flag)
			cout<<p[a[1]];
		else
		{
			flag = 1; 
			swap(a[1],a[2]); //without 2nd element
			for(i=3;i<=n;i++)
			{
				diff[i] = a[i] - a[i-1];
				if(diff[i]!=diff[i-1] && i>=4)
				{
					flag = 0;
					break;
				}
			}
			if(flag)
				cout<<p[a[1]];
			else
			{
				swap(a[1],a[2]);
				flag = 0 ;
				d = a[2] - a[1]; // assuming 1st and 2nd elements are correct
				for(i=3;i<=n;i++)
				{
					if(a[i]-a[i-1] != d)
					{
						if(a[i+1]-a[i-1]==d && i!=n)
						{ ans = p[a[i]]; i+=2;}
						else if(i==n)
						{
							ans = p[a[i]]; 
						}
						else
						{
							ans = -1;
							break;
						}
						c += 1;
					}
				}
				//cout<<"c: "<<c<<endl;
				if(c<=1)
					cout<<ans;
				else 
					cout<<"-1";
			}
		}
	}
	return 0;
}