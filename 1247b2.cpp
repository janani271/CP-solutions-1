#include<bits/stdc++.h>
using namespace std;
long long t , n , k , d , i , j , c , a[200009];
map<long long, long long>m;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n>>k>>d;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		i=0;j=0;c=0;m.clear();
		while(i<n && j<n)
		{
			if(j-i+1 <=d)
			{
				//cout<<"ele: "<<a[j]<<"\n";
				m[a[j]]+=1;
				j++;
				c = m.size();
			}
			else
			{
				c = m.size();
				if(c==1)
				{
					break;
				}
				while(i<n && j<n)
				{
					//cout<<"ele removed: "<<a[i]<<"\n";
					m[a[i]]--;
					if(m[a[i]]==0)
					{
						m.erase(a[i]);
					//	cout<<"deleted : "<<a[i]<<"\n";
					}
					i++;
					//cout<<"j: "<<j<<"\n";
					//cout<<"ele added: "<<a[j]<<"\n";
					m[a[j]]++;
					j++;
					m.erase(0);
					if(m.size()<c)
					{
						c = m.size();
					}
					// cout<<"size: "<<m.size()<<"\n";
					// cout<<"map : ";
					// for(auto it=m.begin();it!=m.end();++it)
					// {
					// 	cout<<it->first<<" ";
					// }
					// cout<<"\n";
				}
			}
		}
		cout<<c<<"\n";
	}
	return 0;
}