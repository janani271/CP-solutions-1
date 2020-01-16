#include<bits/stdc++.h>
using namespace std;

vector<long long>letters[30];
long long n , m , i , j , c[30] , pos , max_val , val , len , k;
string t[50009],s;

int main()
{
	cin>>n;
	cin>>s;
	cin>>m;
	for(i=0;i<m;i++)
	{
		cin>>t[i];
	}
	for(i=0;i<n;i++)
	{
		pos = s[i]-'a';
		letters[pos].push_back(i);
	}
	// cout<<"letters\n";
	// for(i=0;i<26;i++)
	// {
	// 	cout<<(char)(i+'a')<<" : ";
	// 	for(auto it : letters[i])
	// 		cout<<it<<" ";
	// 	cout<<"\n";
	// }
	for(i=0;i<m;i++)
	{
		memset(c,-1,sizeof(c));
		max_val=-1;
		len = t[i].length();
		for(j=0;j<len;j++)
		{
			c[t[i][j]-'a']++;
		}
		for(k=0;k<26;k++)
		{
			if(c[k]!=-1)
			{
				val = letters[k][c[k]] + 1;
				//cout<<(char)(k+'a')<<" : "<<val<<"\n";
				if(val>=max_val)
					max_val = val;
			}
		}
		cout<<max_val<<"\n";	
	}
	return 0;
}