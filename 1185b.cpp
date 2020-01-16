#include<bits/stdc++.h>
using namespace std;
long long n , i , j , len1 , len2 , flag ;  
string a , b ;
int main()
{
	cin>>n;
	while(n--)
	{
		cin>>a>>b;
		j = 0;
		len1 = a.size();
		len2 = b.size();
		flag=1;
		for(i=0;i<len2;i++)
		{
			if(b[i] == a[j] && j<len1)
				j++;
			else if(j>0 && b[i]==a[j-1])
				continue;
			else
			{
				flag=0;
				break;
			}
		}
		if(flag == 0 || j!=len1)
			cout<<"NO\n";
		else
			cout<<"YES\n";
	}
	return 0;
}