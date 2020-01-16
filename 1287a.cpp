#include<bits/stdc++.h>
using namespace  std;
long long t , n , i , pos , ans; 
string s;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		cin>>s;
		pos = -1;
		ans=0;
		for(i=0;i<n;i++)
		{
			if(s[i]=='A' && pos!=-1)
			{
				ans = max(ans , i-pos-1);
			}
			if(s[i]=='A')
				pos = i;
		}
		//cout<<"pos: "<<pos<<"\n";
		ans = max(ans, i-1-pos);
		if(pos!=-1)
			cout<<ans<<"\n";
		else cout<<"0\n";
	}
	return 0;
}