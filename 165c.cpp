#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll k , len , n , i , a[1000009] , l , r , j , s , e , ans;
string str;
int main()
{
	cin>>k;
	cin>>str;
	len = str.length();
	n=0;
	for(i=0;i<len;i++)
	{
		if(str[i]=='1')
		{
			a[n++]=i;
		}
	}
	if(k==0)
	{
		if(n==0)
			cout<<(len*(len+1))/2;
		else
		{
			l = a[0];
			ans += (l*(l+1))/2;
			//cout<<"ans : "<<ans<<"\n";
			for(i=1;i<n;i++)
			{	
				l = a[i]-a[i-1]-1;
				//cout<<"l : "<<l;
				ans += (l*(l+1))/2;
				//cout<<"ans : "<<ans<<"\n";
			}
			l = len - (a[n-1]+1);
			ans += (l*(l+1))/2;
			cout<<ans;
		}
		return 0;
	}
	if(k>n)
	{
		cout<<"0";
		return 0;
	}
	l=0; r=k-1; ans=0;
	while(l<n && r<n && l>=0 && r>=0)
	{
		i = a[l];
		j = a[r];
		if(l>0)
			s = a[l-1]+1;
		else s = 0;
		if(r<n-1)
			e = a[r+1]-1;
		else e = len-1;
		ans += ((i-s+1)*(e-j+1));
		//cout<<"l : "<<l<<" r : "<<r<<"\n";
		//cout<<"s : "<<s<<" e : "<<e<<"\n";
		//cout<<"i : "<<i<<" j : "<<j<<"\n";
		l++; r++;
	}
	cout<<ans;
	return 0;
}