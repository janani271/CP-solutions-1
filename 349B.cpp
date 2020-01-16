#include<bits/stdc++.h>
using namespace std;
long long v , i , a[15], res[1000006], max_val, min_paint, rem , len , j ;
int main()
{
	cin>>v;
	for(i=1;i<=9;i++)
	{
		cin>>a[i];
	}
	max_val = 0; min_paint = v;
	for(i=1;i<=9;i++)
	{	
		if(i>max_val && a[i]<=min_paint)
		{
			max_val = i;
			min_paint = a[i];
		}
	}

	if(max_val==0)
	{
		cout<<"-1";
		return 0;
	}
	
	len = v/min_paint;
	rem = v%min_paint;

	for(i=0;i<len;i++)
	{
		res[i] = max_val;
	}

	for(i=0;i<len;i++)
	{
		for(j=9;j>=1;j--)
		{
			if(rem + min_paint >= a[j])
			{
				rem = rem + min_paint - a[j];
				res[i] = j;
				break;
			}
		}
	}

	for(i=0;i<len;i++)
		cout<<res[i];
	return 0;
}