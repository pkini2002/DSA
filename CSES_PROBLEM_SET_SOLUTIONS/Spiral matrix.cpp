//A number spiral is an infinite grid whose upper-left square has number 1. Here are the first five layers of the spiral:

// Your task is to find out the number in row y and column x.

// Input

// The first input line contains an integer t: the number of tests.

// After this, there are t lines, each containing integers y and x.

// Output

// For each test, print the number in row y and column x.

#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long
#define pb push_back
#define mp make_pair
#define MAX 1000001


using namespace std;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll x,y,ans;
		cin>>x>>y;
		if(x<y)
		{
			if(y%2!=0)
			{
				ans=(y*y)-x+1;
				cout<<ans<<endl;
			}
			else
			{
				ans=(y-1)*(y-1)+x;
				cout<<ans<<endl;
			}
		}

		else{
			if(x%2!=0)
			{
				ans=(x-1)*(x-1)+y;
				cout<<ans<<endl;
			}
			else
			{
				ans=(x*x)-y+1;
				cout<<ans<<endl;
			}
		}
	}
	return 0;
}
