#include<bits/stdc++.h>
using namespace std;
long long n , p , i , val , c;
int main()
{
	cin>>n>>p;
	if(n<=p)
	{
		cout<<"-1";
		return 0;
	}
	for(i=1;i<=32;i++)
	{
		val = n - (i*p);
		c = __builtin_popcount(val);
		//cout<<"n : "<<n<<"\ni : "<<i<<"\nval : "<<val<<"\nc : "<<c<<"\n";
		if(val>0)
		{
			if(c==i || (val-p>=0 && c<=i))
			{
				cout<<i;
				return 0;
			}
		}
		if(val<=0)
			break;
	}
	cout<<"-1";
	return 0;
}