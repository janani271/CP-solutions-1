#include<bits/stdc++.h>
using namespace std;
long long n , s , c ;
queue<long long>q;
int main()
{
	cin>>n;
	s = 1; c=0;
	while(s<=n)
	{
		c++;
		q.push(s*10);
		q.push((s*10)+1);
		s = q.front();
		q.pop();
	}
	cout<<c;
	return 0;
}