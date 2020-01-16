//done but couldn't submit since has to be submitted in file format
#include<bits/stdc++.h>
using namespace std;
long long n , m , i , j , c;
int main()
{
	cin>>n>>m;
	
	if(n>=m)
	{
		i=0;j=0;c=0;
		while(i<n && j<m)
		{
			if(c%2==0)
			{
				cout<<"B";
				i++;
			}
			else 
			{
				cout<<"G";
				j++;
			}
			c++;
		}
		while(j<m)
		{
			cout<<"G";
			j++;
		}
		while(i<n)
		{
			cout<<"B";
			i++;
		}
	}
	else
	{
		i=0;j=0;c=0;
		while(i<n && j<m)
		{
			if(c%2==0)
			{
				cout<<"G";
				j++;
			}
			else 
			{
				cout<<"B";
				i++;
			}
			c++;
		}
		while(i<n)
		{
			cout<<"B";
			i++;
		}
		while(j<m)
		{
			cout<<"G";
			j++;
		}	
	}

	return 0;
}