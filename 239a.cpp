#include<bits/stdc++.h>
using namespace std;
long long y , k , n , s , c;
int main()
{
	cin>>y>>k>>n;
	s = k-(y%k); c=0;
	while(y+s<=n)
	{
		cout<<s<<" ";
		s += k;
		c++;
	}
	if(c==0)
		cout<<"-1";
	return 0;
}