#include<bits/stdc++.h>
using namespace std;
#define pb push_back
long long n , m , i , x , l , r , odiff,pa,pb,apos,bpos,aval,bval,ndiff;
vector<long long>a;
vector<long long>b;
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		a.pb(x);
	}
	cin>>m;
	for(i=0;i<m;i++)
	{
		cin>>x;
		b.pb(x);
	}
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());

	// l = min(a[0],b[0])-1;
	// r = max(a[n-1],b[m-1])+1;
	pa = n*3;
	pb = m*3;
	odiff = pa-pb;
	for(i=0;i<n;i++)
	{
		apos = upper_bound(a.begin(),a.end(),a[i])-a.begin();
		if(a[i]>=a[n-1])
			aval = n*2;
		else
		{
			aval = 2*(apos) + 3*(n-apos);
		}
		bpos = upper_bound(b.begin(),b.end(),a[i])-b.begin();
		if(a[i]>=b[m-1])
			bval = m*2;
		else
		{
			bval = 2*(bpos) + 3*(m-bpos);
		}
		ndiff = aval - bval;
		//cout<<"a: "<<aval<<"\tb: "<<bval<<"\tdiff: "<<ndiff<<endl;
		if(ndiff>odiff || (ndiff==odiff && aval>pa))
		{
			odiff = ndiff;
			pa = aval;
			pb = bval;
		}
	}

	for(i=0;i<m;i++)
	{
		apos = upper_bound(a.begin(),a.end(),b[i])-a.begin();
		if(b[i]>=a[n-1])
			aval = n*2;
		else
		{
			aval = 2*(apos) + 3*(n-apos);
		}
		bpos = upper_bound(b.begin(),b.end(),b[i])-b.begin();
		if(b[i]>=b[m-1])
			bval = m*2;
		else
		{
			bval = 2*(bpos) + 3*(m-bpos);
		}
		ndiff = aval - bval;
		//cout<<"a: "<<aval<<"\tb: "<<bval<<"\tdiff: "<<ndiff<<endl;
		if(ndiff>odiff || (ndiff==odiff && aval>pa))
		{
			odiff = ndiff;
			pa = aval;
			pb = bval;
		}
	}
	cout<<pa<<":"<<pb;
	return 0;
}