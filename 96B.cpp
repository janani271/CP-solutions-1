#include<bits/stdc++.h>
using namespace std;

long long n , temp , i , len , min_res,f,s;
void calc(long long fc, long long sc,long long res)
{	
	if(res>=n && fc==sc)
	{
		if(res<min_res)
			min_res = res;
		return;
	}
	else if(res>1000000000007)
		return;
	calc(fc+1,sc,(res*10)+4);
	calc(fc,sc+1,(res*10)+7);
}

int main()
{
	cin>>n;
	temp = n;
	i=0;
	while(n!=0)
	{
		if(n%10 == 4)
			f++;
		else if(n%10==7)
			s++;
		n = n/10;
		i++; 
	}
	n=temp;
	len = i;
	if(len&1)
	{
		len = len+1;
		for(i=0;i<len/2;i++)
		{
			cout<<"4";
		}
		for(i=len/2;i<len;i++)
		{
			cout<<"7";
		}
	}
	else if(len%2==0 && f==s && f==len/2)
		cout<<n;
	else
	{
		min_res = 100000000009;
		calc(0,0,0);
		cout<<min_res;
	}
	return 0;
}