#include<bits/stdc++.h>
using namespace std;
long long n , i , a[100009] , pos , mini, flag;
int main()
{
	cin>>n;
	mini = 1000000007;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]<mini)
		{
			mini=a[i];
			pos = i;
		}
	}

	flag=1;
	for(i=1;i<=n;i++)
	{
		if(a[i]==mini && pos!=i)
		{
			flag=0;
			break;
		}
	}


	if(flag==0)
	{
		cout<<"Still Rozdil";
	}
	else
	{
		cout<<pos;
	}

	return 0;
}