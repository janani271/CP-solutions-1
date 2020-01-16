#include<bits/stdc++.h>
using namespace std;
int noa , n , i , flag , j , a[10009] , cur;
int main()
{
	noa = 0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(i>0)
		{
			cur = a[i];

			flag=1;
			for(j=0;j<i;j++)
			{
				if(cur<=a[j])
					flag=0; 
			}
			if(flag==1)
				noa=noa+1;
		
			flag=1;
			for(j=0;j<i;j++)
			{
				if(cur>=a[j])
					flag=0;
			}
			if(flag==1)
				noa+=1;
		}
	}

	cout<<noa;

	return 0;
}