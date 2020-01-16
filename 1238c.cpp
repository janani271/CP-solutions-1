#include<bits/stdc++.h>
using namespace std;
long long q , n , h , i , c , p[200007];
int main()
{
	cin>>q;
	while(q--)
	{
		cin>>h>>n;
		for(i=0;i<n;i++)
		{
			cin>>p[i];
		}
		p[n]=0;
		i=0; c=0;
		while(i<n)
		{
			//cout<<i<<" : "<<"\n";
			if(p[i]==1 || p[i]==2)
				break;
			if(i<=n-2 && p[i+1]==p[i]-1 && p[i+2]==p[i]-2)
			{
				i = i+2;
			}
			else if(i<=n-1 && p[i+1]==p[i]-1)
			{
				i++;
				c++;
			}
			else if(i<=n-1)
			{
				p[i] = p[i+1] + 1;
			}
		}
		cout<<c<<"\n";
	}
	return 0;
}