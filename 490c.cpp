#include<bits/stdc++.h>
using namespace std;
long long a , b , i ,  n , ans , p , ra[1000006], rb[1000006];
string s;
int main()
{
	cin>>s;
	n = s.length();
	cin>>a>>b;
	ans=0;
	for(i=0;i<n;i++)
	{
		ra[i] = ((ans*10)+(s[i]-'0'))%a;
		ans = ra[i];  
	}
	ans=0; p=1;
	for(i=n-1;i>=0;i--)
	{
		//cout<<"p before mod: "<<p<<"\n";
		rb[i] = (ans + ((s[i]-'0') * p))%b;
		//cout<<"rb: "<<rb[i]<<"\n";
		ans = rb[i];
		// the meaning of the below statement is that, if rb[i] becomes greater than b, then it will be reduced to a smaller number through mod.
		// 1---> we know that p's value should be a power of 10 which is equal to the no.of digits in rb[i] after taking mod.
		// 2---> and obviously p's value itself should not exceed b because then rb[i+1] will def be greater than b. 
		// so inorder to ensure both 1 and 2, we always multiply p by 10, and then take mod which will automatically ensure 1 as well as 2.
		p = (p * 10) % b;
		//cout<<"p after mod: "<<p<<"\n";
	}
	for(i=1;i<n;i++)
	{
		//cout<<"i: "<<i<<"\tra: "<<ra[i]<<"\trb: "<<rb[i]<<"\n";
		if(ra[i-1]==0 && s[i]!='0' && rb[i]==0)
		{
			cout<<"YES\n";
			cout<<s.substr(0,i)<<"\n"<<s.substr(i,n-i);
			return 0;
		}
	}
	cout<<"NO";
	return 0;
}