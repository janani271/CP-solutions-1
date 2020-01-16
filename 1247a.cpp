#include<bits/stdc++.h>
using namespace std;
long long a , b;
int main()
{

	cin>>a>>b;
	if(a==9 && b==1)
		cout<<a<<" "<<"10";
	else if(a==b)
	{
		cout<<a<<"1 ";
		cout<<b<<"2 ";
	}
	else if((a+1)==b)
		cout<<a<<" "<<b;
	else
		cout<<"-1";
	return 0;
}