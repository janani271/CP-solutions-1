#include<bits/stdc++.h>
using namespace std;

int n , first, second, maxi , mini , c , min_pos , max_pos, a[1000] ,i;

int main()
{
	cin>>n;
	maxi = -1;
	mini = 500;
	if(n==2)
	{
		cin>>first>>second;
		if(first>=second)
			c=0;
		else
			c=1;
	}
	else
	{
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]<=mini)
			{
				mini = a[i];
				min_pos = i;
			}
			if(a[i]>maxi)
			{
				maxi = a[i];
				max_pos=i;
			}
		}

		if(max_pos<=min_pos)
		{
			c = max_pos + (n - min_pos - 1);
		}
		else if(max_pos>min_pos)
		{
			c = max_pos + (n - min_pos - 1) -1 ;
		}
		else if(max_pos==0)
		{
			if(min_pos==0)
				c=0;
			else
				c = n - min_pos - 1;
		}

		else if(min_pos==0)
		{
			if(max_pos==0)
				c=0;
			else
				c = max_pos;
		}
	}

	cout<<c;

	return 0;
}