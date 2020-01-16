#include<bits/stdc++.h>
using namespace std;
long long q , n , i , zero[60], one[60], len , j , c , r ,flag; 
string s[60];
int main()
{
	cin>>q;
	while(q--)
	{
		cin>>n;
		memset(zero,0,sizeof(zero));
		memset(one,0,sizeof(one));
		for(i=0;i<n;i++)
		{
			cin>>s[i];
			len = s[i].length();
			for(j=0;j<len;j++)
			{
				if(s[i][j]=='0')
					zero[i]++;
				else one[i]++;
			}
		}
		c=0; flag=0;
		for(i=0;i<n;i++)
		{
			if((zero[i]+one[i]) % 2 == 1)
			{
				flag =1 ; 
				break;
			}
			else
			{
				if(zero[i]%2==0)
					c++;
			}
		}
		if(flag)
			cout<<n<<"\n";
		else
		{
			r=0;
			for(i=0;i<n;i++)
			{
				if((zero[i]+one[i])%2==0)
				{
					if(zero[i]%2==1)
						r++;
				}
			}

			c = c + (r-(r%2));

			cout<<c<<"\n";
		}
	}
	return 0;
}