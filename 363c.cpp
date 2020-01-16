#include<bits/stdc++.h>
using namespace std;
long long n , i , c,p,len;
string  s , ans, ans2;
int main()
{
	cin>>s;
	n = s.length();
	i=0;
	ans=""; c=0;
	while(i<n)
	{
		if(s[i]!=s[i+1] && c<=1 && i<n-1)
		{
			ans += s[i];
			c=0;
			i++;
		}
		else
		{
			if(c<=1)
			{
				c++;
				ans += s[i];
				i++;
			}
			else
			{
				while(s[i]==s[i+1] && i<n-1)
					i++;
				i++;
				c=0;
			}
		}
	}
	//string has only pair occurences at this point
	//cout<<ans<<"\n";

	// to remove consecutive pairs
	i=0; p=-5; ans2=""; len = ans.length();
	while(i<len)
	{
		if(ans[i]!=ans[i+1])
		{
			ans2 += ans[i];
			//cout<<"s : "<<s[i]<<"\n";
			i++;
		}
		else if(ans[i]==ans[i+1] && p!=i-1)
		{
			ans2 += ans[i];
			i++;
			ans2 += ans[i];
			//cout<<"s: "<<s[i]<<"\tp: "<<p<<"\n";
			p=i;//previous pair's ending index
			i++;
		}
		else if(ans[i]==ans[i+1] && p==i-1 && i>1)
		{
			//cout<<"previous pair : "<<s[p]<<"\n";
			i++;
			//cout<<"current pair : "<<s[i]<<"\n";
			ans2 += ans[i];
			i++;
		}
	}
	cout<<ans2;
	return 0;
}