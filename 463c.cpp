#include<bits/stdc++.h>
using namespace std;

long long n , x , y , i , j , a[2009][2009], val[2009][2009], diag[100000], maxi , pos2y, pos2x, pos1x, pos1y;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	//totally 4n-2 diagonals
	cin>>n;
	x = n;
	y = 2*n; //(2*n)-1 diagonals on one side. 2nd side starts from 2*n
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>a[i][j];
			diag[x] += a[i][j];
			diag[y] += a[i][j];
			x++; y++;
		}
		x--;
		x-=n;
		y++;
		y-=n; 
	}

	maxi = -1; pos1x = -1; pos1y = -1;
	x = n;
	y = 2*n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			val[i][j] = diag[x] + diag[y] - a[i][j];
			if(val[i][j]>maxi)
			{
				maxi = val[i][j];
				pos1x = i;
				pos1y = j;
			}
			x++; y++; 
		}
		x--;
		x-=n;
		y++;
		y-=n;
	}

	maxi = -1; pos2x = -1; pos2y = -1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if((i+j)%2!=(pos1x+pos1y)%2 && val[i][j]>maxi)
			{
				maxi = val[i][j];
				pos2x = i;
				pos2y = j;
			}
		}
	}

	cout<<val[pos1x][pos1y]+val[pos2x][pos2y]<<"\n";
	cout<<pos1x<<" "<<pos1y<<" "<<pos2x<<" "<<pos2y;

	return 0;
}