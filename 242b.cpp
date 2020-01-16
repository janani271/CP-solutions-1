#include<bits/stdc++.h>
using namespace std;
long long n , l , r , s , x , y,i;
int main()
{
	cin>>n;
	s=-1;
	l = 1000000001; r = 0;
	for(i=1;i<=n;i++)
	{
		cin>>x>>y;
		if(x<=l && r<=y)
		{
			l=x; r=y;
			s=i;
		}
		else if((x<l && y<r) || (y>r && x>l))
		{
			s = -1;
			l = min(l,x);
			r = max(r,y);
		}
		//cout<<"\ni: "<<i<<"\ts: "<<s<<"\tl: "<<l<<"\tr: "<<r<<endl;
	}
	cout<<s;
	return 0;
}