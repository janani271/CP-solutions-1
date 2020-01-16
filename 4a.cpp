#include<bits/stdc++.h>
using namespace std;
long long n;
int main()
{
	cin>>n;
	if((n-2)%2==0 && n-2!=0)
		cout<<"YES";
	else cout<<"NO";
	return 0;
}