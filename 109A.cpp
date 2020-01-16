#include<bits/stdc++.h>
using namespace std;
long long n ,f ,c, s , flag , i; 
int main()
{
	cin>>n;
	f=0;s=0;c=0;flag=0;
	while(n>=4 && f>=s)
	{
		//cout<<"n : "<<n<<"\n";
		if(n%4==0 && n/4>=c)
		{
			f = n/4;
			s = c;
			flag=1;
			//cout<<"n: "<<n<<" f: "<<f<<" s: "<<s<<"\n";
		}
		if(f==s && f!=0)
			break;
		n = n-3;
		c++;
	}
	if(!flag || f<s)
	{
		cout<<"-1";
		return 0;
	}
	for(i=0;i<f-s;i++)
		cout<<"4";
	for(i=0;i<s;i++)
		cout<<"7";
	return 0;
}