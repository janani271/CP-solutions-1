#include<bits/stdc++.h>
using namespace std;
string str , a , b , c , d;
long long t , len;
int main()
{
	cin>>t;
	a = "po";
	b = "desu";
	c = "masu";
	d = "mnida";
	while(t--)
	{
		cin>>str;
		len = str.length() - 1;
		if(str.compare(len-1,2,a,0,2)==0)
			cout<<"FILIPINO";
		else if(str.compare(len-3,4,b,0,4)==0 || str.compare(len-3,4,c,0,4)==0 )
			cout<<"JAPANESE";
		else //if(str.compare(len-4,4,d,0,5)==0)
			cout<<"KOREAN";
		cout<<"\n";
	}
	return 0;
}