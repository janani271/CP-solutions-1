#include<bits/stdc++.h>
using namespace std;
long long l , r , i , temp, c; 
unordered_set<long long>s;
int main()
{
	cin>>l>>r;                                                                                                               
	for(i=l;i<=r;i++)
	{
		temp = i;
		c=0; s.clear();
		while(temp!=0)
		{
			s.insert(temp%10);
			temp = temp/10;
			c++;
		}
		if(s.size()==c)
		{
			cout<<i;
			return 0;
		}
	}
	cout<<"-1";
	return 0;
}