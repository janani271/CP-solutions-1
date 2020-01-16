#include<bits/stdc++.h>
using namespace std;

string weights;
long long m , j , i , w[15], len , ans , res[1007] , visited[1007][15][15];

int path(long long cur, long long diff, long long pre)
{
	//cout<<"cur: "<<cur<<"\tdiff : "<<diff<<"\tpre : "<<pre<<"\n";
	if((cur>0 && diff==0) || diff>10 || diff<0)
		return 0;
	if(cur==m)
		return 1;
	if(visited[cur][diff][pre])
		return 0;
	visited[cur][diff][pre] = 1;
	for(long long k=0;k<len;k++)
	{
		if(w[k]!=pre)
		{
			res[cur]=w[k];
			if(path(cur+1,w[k]-diff,w[k]))
				return 1;
		}
	}
	return 0;
}

int main()
{
	cin>>weights;
	cin>>m;
	j=0;
	for(i=0;i<10;i++)
	{
		if(weights[i]=='1')
		{
			w[j++]=i+1;
		}
	}
	
	len=j;
	ans = path(0,0,12);
	if(!ans)
		cout<<"NO";
	else
	{
		cout<<"YES\n";
		for(i=0;i<m;i++)
		{
			cout<<res[i]<<" ";
		}
	}
	return 0;
}