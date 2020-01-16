#include<bits/stdc++.h>
using namespace std;
double m,n,sum,tot,i; 
int main()
{
	cin>>m>>n;
	sum=0;
	for(i=1;i<=m;i++)
	{
		//the count of outcomes where i is the max value
		sum += i * ( pow((i/m),n) - pow(((i-1)/m),n) ); 
		//and simultaneously adding corresponding value (multiplying by i)
	}	 
	cout<<fixed<<setprecision(12)<<sum;
	return 0;
}