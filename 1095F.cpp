// any dsu has 3 functions =>find , union and root
// find checks if the 2 vertices belong to the same component by finding root using root function
// union finds the roots of the 2 vertices and attaches the root of lesser size to the one with bigger size
//root function simply returns the root of the given node by taking jumps at grandparent levels

#include<bits/stdc++.h>
using namespace std;

long long n , m , i , mini, pos , a[200009] , par[200009] , x, y,w,tot , s[200009];
vector<pair<long long,pair<long long,long long>>>v;

long long parent(long long x)
 {
 	while(x!=par[x])
 	{
 		par[x] = par[par[x]]; //jumping by grandparents => reduces complexity to log*N from log2N
 		x = par[x];
 	}
 	return x;
 }

void add_comps(long long a , long long b)
{
	if(s[a]<s[b])
	{
		par[a] = b;
		s[b]+=s[a]; //making the bigger component the parent of the smaller one and modifying the size
		//size indicates the no.of children => this keeps the tree balanced and reduces complexity from O(n) to O(log_2_N)
	}
	else
	{
		par[b] = a;
		s[a] += s[b];
	}
}

bool check_if_same_comp(long long a , long long b)
{
	a = parent(a); //parent of a
	b = parent(b); //parent of b
	if(a == b) //if they belong to the same component
		return true;
	else  //=>they do not belong to the same component
	{
		add_comps(a,b);  //connecting the components of roots of a and b=>union
		return false;
	}
}
int main()
{
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
	
	cin>>n>>m;
	mini = 1000000000009;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		par[i] = i;
		s[i] = 1;
		if(a[i]<mini)
		{
			mini=a[i];
			pos=i;
		}
	}
	for(i=1;i<=m;i++)
	{
		cin>>x>>y>>w;
		v.push_back(make_pair(w , make_pair(x , y)));
	}

	if(m!=0)
	{
		for(i=1;i<=n;i++)
		{
			if(i!=pos)
			{
				v.push_back(make_pair(a[i]+a[pos] , make_pair(i , pos)));
			}
		}
		sort(v.begin(),v.end());
		tot=0;
		for(i=0;i<n-1+m;i++)
		{
			if(!check_if_same_comp(v[i].second.first , v[i].second.second)) 
			//if both the vertices are already present in the given component, don't add it=>will cause cycle
				tot += v[i].first;
		}
	}
	else
	{
		tot = (n-1)*mini;
		for(i=1;i<=n;i++)
		{
			if(i!=pos)
				tot += a[i];
		}
	}
	cout<<tot;
	return 0;
}

