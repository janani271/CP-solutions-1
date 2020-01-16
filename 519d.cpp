#include<bits/stdc++.h>
using namespace std;
string s;
map<long long, long long>m[26];
long long i , cost[28] , len , ans , sum;
int main()
{
	for(i=0;i<26;i++)
	{
		cin>>cost[i];
	}
	cin>>s;
	len = s.length();
	ans=0; sum=0;
	for(i=0;i<len;i++)
	{
		// m[s[i]-'a'] -> map of a particular character
		// m[s[i]-'a'][sum] -> no.of prefixes ending with that character and having that sum so far
		// this works because when you find prefixes having sum equal to the cur sum upto the (i-1)th char, when you subtract
		// it will be equal to zero and already bc of the way we check, the 1st and last chars are equal
		ans += m[s[i]-'a'][sum];
		sum += cost[s[i]-'a'];
		m[s[i]-'a'][sum]++;
	}
	cout<<ans;
	return 0;
}