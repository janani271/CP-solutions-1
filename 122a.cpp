// 4 7
// 44 47 74 77

// 444 447 474 477 744 747 774 777
#include<bits/stdc++.h>
using namespace std;
vector<int>v;
queue<int>q;
void calc()
{
	v.push_back(4);
	v.push_back(7);
	q.push(7);
	int num = 4;
	while(num<=100)
	{
		if((num*10)+4 <= 1000)
		{
			q.push((num*10)+4);
			v.push_back((num*10)+4);
		}
		if((num*10)+7 <= 1000)
		{
			q.push((num*10)+7);
			v.push_back((num*10)+7);
		}
		num = q.front();
		q.pop();
	}
}

bool isdivisible(int x)
{
	for(auto it : v)
	{
		if(x % (it)==0)
			return true;
	}
	return false;
}

int main()
{
	int n;
	cin>>n;
	calc();
	if(isdivisible(n))
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}