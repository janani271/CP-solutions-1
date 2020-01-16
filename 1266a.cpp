#include<bits/stdc++.h>
using namespace std;
string x;
long long n , l , i , j , z , tw , tr , c ;
vector<long long>v;
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		l = x.length();
		//cout<<"x: "<<x<<"\n";
		v.clear();
		for(j=0;j<l;j++)
		{
			v.push_back(x[j]-'0');
			//cout<<v[j];
		}
		//cout<<"\n";
		z=0; tw=0; tr=0; c=0;
		for(j=0;j<l;j++)
		{
			if(v[j]==0)
				z++;
			else if(v[j]%2==0)
				tw++;
			c += v[j];
		}
		//cout<<"tr: "<<tr<<"\ttw : "<<tw<<"\tz : "<<z<<"\tc : "<<c<<"\n";
		if(c%3==0)
			tr=1;
		if((z==1 && tw==1 && tr==1)||c==0 || (tr==1 && z>0 && (z>1 || tw>0)))
			cout<<"red\n";
		else cout<<"cyan\n";
	}
	return 0;
}