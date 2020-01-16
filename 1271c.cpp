#include<bits/stdc++.h>
using namespace std;
long long n , a , b , sa , sb , px , py , pc , c , x[200005] , y[200005] , i;
vector<pair<long long, long long>>v;
int main()
{
	cin>>n>>a>>b;
	for(i=0;i<n;i++)
	{
		cin>>x[i]>>y[i];
	}
	v.push_back(make_pair(a,b-1));
	v.push_back(make_pair(a+1,b));
	v.push_back(make_pair(a,b+1));
	v.push_back(make_pair(a-1,b));

	pc=-1; px=-1; py=-1;
	for(auto it:v)
	{
		sa = it.first;
		sb = it.second;
		c=0;
		//cout<<"sa : "<<sa<<"\tsb: "<<sb<<"\n";
		for(i=0;i<n;i++)
		{
			if(min(x[i],a)<=sa && max(x[i],a)>=sa && min(y[i],b)<=sb && max(y[i],b)>=sb)
				c++;
		}
		//cout<<"c : "<<c<<"\n";
		//cout<<"pc : "<<pc<<"\n";
		if(c>pc)
		{
			pc = c;
			px = sa;
			py = sb;
		}
	}
	cout<<pc<<"\n";
	cout<<px<<" "<<py;
	return 0;
}