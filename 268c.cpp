#include<bits/stdc++.h>
using namespace std;
long long n , m , x,y;
int main()
{
	cin>>n>>m;
	cout<<min(n,m)+1<<"\n";
	x = min(n,m); y=0;
	while(x>=0)
	{
		cout<<x<<" "<<y<<"\n";
		x--; y++;
	}

	return 0;
}