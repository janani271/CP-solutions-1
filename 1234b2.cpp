#include<bits/stdc++.h>
using namespace std;
queue<long long>q;
stack<long long>s;
long long n , k , i , id[200009] , r; 
map<long long,long long>p;
int main()
{
	cin>>n>>k;
	for(i=0;i<n;i++)
	{
		cin>>id[i];
	}
	//processing
	for(i=0;i<n;i++)
	{
		if(p[id[i]]==0)
		{
			if(q.size()==k)
			{
				r = q.front();
				q.pop();
				p[r]=0;
			}
			q.push(id[i]);
			p[id[i]]=1;
		}
	}

	cout<<q.size()<<"\n";
	while(!q.empty())
	{
		s.push(q.front());
		q.pop();
	}
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}

	return 0;
}