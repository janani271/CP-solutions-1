#include<bits/stdc++.h>
using namespace std;
long long q , n , s , t , ans[103],i;
int main()
{
	cin>>q;
	for(i=0;i<q;i++)
	{
		cin>>n>>s>>t;
		ans[i] = max(n-s,n-t)+1;
	}
	for(i=0;i<q;i++)
		cout<<ans[i]<<" ";
	return 0;
}