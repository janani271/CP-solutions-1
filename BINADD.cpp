#include<bits/stdc++.h>
using namespace std;
#define ll long long
string a , b;
ll t , la , lb , len , i , j , x[1000009] , y[1000009] , u[1000009] , v[1000009] , uc[1000009] , vc[1000009];
ll one , eq , cnt1 ,cnt2 , cnt; 
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>a;
		cin>>b;
		la = a.length();
		lb = b.length();
		if(lb==1 && b=="0")
		{
			cout<<"0\n";
			continue;
		}
		else if(la==1 && a=="0")
		{
			cout<<"1\n";
			continue;
		}

		len = max(la,lb);
		i = la-1;
		j = lb-1;
		while(len>=0)
		{
			if(i>=0)
				x[len] = a[i]-'0';
			else x[len] = 0;
			if(j>=0)
				y[len] = b[j]-'0';
			else
				y[len] = 0;
			i--; j--; len--;
		}
		len = max(la,lb);
		u[0]=0;
		for(i=1;i<=len;i++)
		{
			u[i] = x[i]^y[i];
			v[i-1] = x[i]&y[i];
		}
		v[len]=0; one=0; eq=0;
		for(i=0;i<=len;i++)
		{
			if(v[i]==1)
				one=1;
			if(v[i]==u[i] && v[i]==1)
				eq=1;
		}
		if(eq==0)
		{
			if(one==0)// if v is zero
				cout<<"1\n";
			else cout<<"2\n";
			continue;
		}

		cnt1=0; cnt2=0; cnt=0;
		for(i=0;i<=len;i++)
		{
			if(u[i]==0)
				cnt1=0;
			else
				cnt1++;
			
			if(v[i]==0)
				cnt2=0;
			else
				cnt2++;
			uc[i]=cnt1;
			vc[i]=cnt2;
		}

		for(i=0;i<=len;i++)
		{
			if(u[i]==v[i] && v[i]==1)
			{
				cnt = max(cnt,max(uc[i],vc[i]));
			}
		}
		cout<<cnt+2<<"\n";
		// for(i=0;i<=len;i++)
		// 	cout<<x[i];
		// cout<<"\n\n";
		// for(i=0;i<=len;i++)
		// 	cout<<y[i];
		// cout<<"\n\n";
		// for(i=0;i<=len;i++)
		// 	cout<<u[i];
		// cout<<"\n\n";
		// for(i=0;i<=len;i++)
		// 	cout<<v[i];
	}
	return 0;
}