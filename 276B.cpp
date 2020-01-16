#include<bits/stdc++.h>
using namespace std;
char s[10000];
unsigned long long i , c[30] , np;
int main()
{
	cin>>s;

	for(i=0;i<26;i++)
	{
		c[i]=0;
	}

	for(i=0;i<strlen(s);i++)
	{
		c[(int)s[i]-97]++;
	}

	for(i=0;i<26;i++)
	{
		if(c[i]%2!=0)
			np++;
	}

	if(np<=1 || (np>1&&np%2!=0))
		cout<<"First";
	else if(np>1 && np%2==0)
		cout<<"Second";
	return 0;
}