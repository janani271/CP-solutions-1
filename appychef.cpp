#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)  
 {  
    if (a == 0 || b == 0)  
        return 0;  
   
    if (a == b)  
        return a;  
   
    if (a > b)  
        return gcd(a-b, b);  
    return gcd(a, b-a);  
 } 

int main()
{
	long long t , n , a , b , k , appy , chef , both , common , g ;
	appy =0 , chef=0 , both=0;
	cin>>t;
	while(t--)
	{
		cin>>n>>a>>b>>k;

		appy = n/a;
		chef = n/b;
		g = gcd(a,b);
		common = (a*b)/g;
		both = n/common;
		appy=appy-both;
		chef=chef-both;
		if(appy+chef>=k)
			cout<<"Win"<<"\n";
		else 
			cout<<"Lose"<<"\n";
	}
}