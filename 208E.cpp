#include<bits/stdc++.h>
using namespace std;

long long n,i,l,c,depth[100009],visited[100009],m,v,p,d,stp,f1,f2,ans;
vector<long long>g[100009];

struct nod
{
	long long n;
	long long st;
	long long et;
}node[100009],parent_node;

vector<nod>level[100009];


bool stcheck(nod a , nod b)
{
	return (a.st < b.st);
}
bool etcheck(nod a , nod b)
{
	return (a.et < b.et);
}
void dfs(long long x, long long par)
{
	visited[x]=1;
	node[x].st = ++c;
	depth[x] =  depth[par] + 1;
	if(g[x].begin()==g[x].end())
	{
		node[x].et = c;
	}
	else
	{
		for(auto it = g[x].begin();it!=g[x].end();++it)
		{
			if(!visited[*it])
			{
				dfs(*it,x);
				c++;
			}
		}
		node[x].et = c;
	}
	level[depth[x]].push_back(node[x]);
}

int main()
{
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>l;
		if(l!=0)
			g[l].push_back(i);
	}

	//dfs ordering and depth
	c=0;
	for(i=1;i<=n;i++)
	{
		depth[0] = 0;
		if(!visited[i])
			dfs(i,0);
	}

	// for(i=1;i<=n;i++)
	// {
	// 	sort(level[i].begin(),level[i].end(),stcheck);
	// }

	cin>>m;
	for(i=1;i<=m;i++)
	{
		cin>>v>>p;
		d = depth[v] - p;
		if(d<=0)
		{
			cout<<"0"<<endl;
			continue;
		}
		stp = lower_bound(level[d].begin(),level[d].end(),node[v],stcheck) - level[d].begin();
		stp--;
		parent_node = level[d][stp];
		//cout<<"\nparent_node: "<<parent_node<<endl; 
		f1 = lower_bound(level[depth[v]].begin(),level[depth[v]].end(),parent_node,stcheck) - level[depth[v]].begin();
		f2 = lower_bound(level[depth[v]].begin(),level[depth[v]].end(),parent_node,etcheck) - level[depth[v]].begin();
		f2--;
		//cout<<"\nf1: "<<f1<<"\tf2 : "<<f2<<endl;
		ans = (f2-f1)>=0?(f2-f1):0;
		cout<<ans<<endl;
	}

	// for(i=1;i<=n;i++)
	// {
	// 	if(level[i].begin()!=level[i].end())
	// 	{
	// 		cout<<endl<<i<<" : ";
	// 		for(auto it = level[i].begin();it!=level[i].end();++it)
	// 		{
	// 			cout<<*it<<" "<<depth[i]<<endl;
	// 		}
	// 	}
	// }
	// for(i=1;i<=n;i++)
	// {
	// 	cout<<"\n"<<i<<" :\t st :"<<st[i]<<"\tet : "<<et[i];
	// }
	return 0;
}