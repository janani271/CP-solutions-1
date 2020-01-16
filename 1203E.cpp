#include<bits/stdc++.h>
using namespace std;
long long n, i , a[150009], visited[150009], c;
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	memset(visited,0,sizeof(visited));
	c=0;
	for(i=0;i<n;i++)
	{
		if(!visited[a[i]-1] && a[i]-1!=0)
		{
			c++;
			visited[a[i]-1]=1;
		}		
		else
		{
			if(!visited[a[i]])
			{
				c++;
				visited[a[i]]=1;
			}
			else if(!visited[a[i]+1])
			{
				c++;
				visited[a[i]+1]=1;
			}
		}
	}
	cout<<c;
	return 0;
}