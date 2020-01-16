#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll r , g , b,ans,a[5];
int main()
{
	cin>>a[0]>>a[1]>>a[2];

	sort(a,a+3);

	r = a[0]; g = a[1]; b = a[2];

	ans = (r+g+b)/3;
	ans = min(ans, r+g);

	cout<<ans;
	return 0;
}