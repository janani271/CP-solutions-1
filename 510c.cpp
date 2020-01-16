#include<bits/stdc++.h>
using namespace std;

long long n , i , len, j , in[30],c,x,flag;
queue<long long>q;
vector<long long>g[30],res; 
string s[105];
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
		cin>>s[i];

	//constructing the graph
	for(i=1;i<n;i++)
	{
		len = min(s[i-1].length(),s[i].length());
		flag =0;
		for(j=0;j<len;j++)
		{
			if(s[i-1][j]!=s[i][j])
			{
				flag=1;
				g[s[i-1][j]-'a'].push_back(s[i][j]-'a');
				in[s[i][j]-'a']++;
				break;
			}
		}
		if(!flag && s[i-1].length()>s[i].length())
		{
			cout<<"Impossible";
			return 0;
		}
	}

	//toposort
	c=0;
	for(i=0;i<26;i++)
	{
		if(in[i]==0)
			q.push(i);
	}

	while(!q.empty())
	{
		x = q.front();
		q.pop();
		res.push_back(x);
		for(auto it=g[x].begin();it!=g[x].end();++it)
		{
			in[*it]--;
			if(in[*it]==0)
				q.push(*it);
		}
		c++;
	}

	//printing
	if(c!=26)
		cout<<"Impossible";
	else
	{
		for(auto it=res.begin();it!=res.end();++it)
		{
			cout<<(char)(*it+'a');
		}
	}
	return 0;
}