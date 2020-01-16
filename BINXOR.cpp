#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long
long long t , n , i , a[200007] , b[200007] , c , ca , cb , max_ones , min_ones , ans , f[200007] , val; 
string x , y;

void fact()
{
	f[0]=1;
	for(i=1;i<=100002;i++)
	{
		f[i] = (f[i-1] * i)%MOD;
	}
}

long long modinv(long long x)
{
	ll res=1;
	x = x % MOD;
	ll y = MOD-2;
	while(y>0)
	{
		if(y&1)
			res = (res*x) % MOD;
		x = (x*x)%MOD;
		y = y>>1;
	}
	return res%MOD;
}

long long calc (long long  r)
{
	if(r==0 || r==n)
		return 1;
	if(r==1)
		return n;
	return ( f[n] * ( ( modinv(f[r]) * modinv(f[n-r]) ) %MOD ) ) %MOD;
}

int main()
{
	cin>>t;
	fact();
	while(t--)
	{
		cin>>n;
		cin>>x;
		cin>>y;
		for(i=0;i<n;i++)
		{
			a[i] = x[i]-'0';
			b[i] = y[i]-'0';
		}
		sort(a,a+n);
		sort(b,b+n,greater<long long>());
		c=0; ca=0; cb=0;
		for(i=0;i<n;i++)
		{
			if(a[i]==b[i] && a[i]==1)
				c++;
			if(a[i]==1)
				ca++;
			if(b[i]==1)
				cb++;
		}
		//cout<<"ca : "<<ca<<"\tcb: "<<cb<<"\tc : "<<c<<"\n";
		max_ones = (ca+cb)-(c+c);
		min_ones = abs(ca-cb);
		//cout<<"max_ones : "<<max_ones<<"\tmin_ones: "<<min_ones<<"\n";
		
		// if(max_ones==0)
		// {
		// 	cout<<"1\n";
		// 	continue;
		// }

		ans=0;
		for(i=min_ones;i<=max_ones;i+=2)
		{
			//cout<<"i : "<<i<<"\n";
			//cout<<"inter : "<<(calc(n,i)%MOD)<<"\n";
			//ans = ((ans%MOD) + (calc(i)%MOD))%MOD;
			//val = ( f[n] / ((f[i] * f[n-i])%MOD) )%MOD;
			val = calc(i);
			//cout<<"i : "<<i<<"\tn: "<<n<<"\tval: "<<val<<"\n\n";
			ans = (ans%MOD + val%MOD) %MOD;
		}
		cout<<ans<<"\n";
	}
	return 0;
}