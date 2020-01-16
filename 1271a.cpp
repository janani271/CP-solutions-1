#include<bits/stdc++.h>
using namespace std;
long long a , b , c , d1 , d2 , e , d, f , cost1 , cost2 , num , num1;
int main()
{
	cin>>a>>b>>c>>d>>e>>f;

		num = min(b,min(c,d));
		cost1 = num*f;
		d1 = d-num;
		num1 = min(a,d1);
		cost1 += (num1*e);
		
		num = min(a,d);
		cost2 = num*e;
		d2 = d-num;
		num1 = min(d2,min(b,c));
		cost2 += (num1*f);

		cout<<max(cost1,cost2);

	return 0;
}