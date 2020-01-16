#include<bits/stdc++.h>
using namespace std;
long long n , ca , cb , c,i;
string s;
int main()
{
	cin>>n;
	cin>>s;
	for(i=0;i<n;i++)
	{
		if(s[i]=='a')
			ca++;
		if(s[i]=='b')
			cb++;
		if(i%2==1)
		{
			if(ca!=cb)
			{
				c++;
				if(ca<cb)
				{
					s[i]='a';
					ca++; cb--;
				}
				else if(cb<ca)
				{
					s[i]='b';
					ca--; cb++;
				}
			}
		}
	}
	cout<<c<<"\n";
	cout<<s;
	return 0;
}