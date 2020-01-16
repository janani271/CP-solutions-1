#include<bits/stdc++.h>
using namespace std;

long long m , s , sum , i , j ;
string s1,s2;
int main()
{
	cin>>m>>s;
	if(s==0)
	{
		if(m==1)
			cout<<"0 0";
		else cout<<"-1 -1";
		return 0;
	}
	else if(s>m*9)
	{
		cout<<"-1 -1";
		return 0;
	}

	sum=s;
	for(i=1;i<=m;i++)
	{
		//for each position
		for(j=(i==1?1:0);j<=9;j++)
		{
			if(sum-j <= (m-i)*9 && sum-j>=0)
			{
				sum -= j;
				s1 += to_string(j);
				break;
			}
		}
	}

	sum=s;
	for(i=1;i<=m;i++)
	{
		//for each position
		for(j=9;j>=0;j--)
		{
			if(sum-j <= (m-i)*9 && sum-j>=0)
			{
				sum -= j;
				s2 += to_string(j);
				break;
			}
		}
	}

	cout<<s1<<" "<<s2;
	return 0;
}