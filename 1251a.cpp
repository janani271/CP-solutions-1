#include<bits/stdc++.h>
using namespace std;
set<char>ress;
long long t , n , c , i ;  
string s,res;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>s;
		res="";
		ress.clear();
		n = s.length();
		c=0; i=0;
		while(i<n)
		{
			if(i<n-1 && s[i]==s[i+1])
			{
				c++;
				//cout<<"match : "<<s[i]<<"\tcount : "<<c<<"\n"; 
			}
			else if(i<n-1 && s[i]!=s[i+1])
			{
				if(c%2==0)
				{
					//cout<<"last : "<<s[i]<<"\tcount : "<<c<<"\n";
					ress.insert(s[i]);
				}
				c=0;
			}
			else if(i==n-1)
			{
				if((s[i]==s[i-1] && c%2==0) || s[i]!=s[i-1])
				{
					//cout<<"very last : "<<s[i]<<"\tcount : "<<c<<"\n";
					ress.insert(s[i]);
				}

			}
			//cout<<"set now : ";
			// for(auto it = ress.begin();it!=ress.end();++it)
			// {
			// 	cout<<*it;
			// }
			// cout<<"\n";	
			i++;
		}
		for(auto it = ress.begin();it!=ress.end();++it)
		{
			res += (*it);
		}
		cout<<res<<"\n";
	}
	return 0;
}