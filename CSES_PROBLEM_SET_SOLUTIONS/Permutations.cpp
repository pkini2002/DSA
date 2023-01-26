// A permutation of integers 1,2,…,n is called beautiful if there are no adjacent elements whose difference is 1.

// Given n, construct a beautiful permutation if such a permutation exists.

// Input

// The only input line contains an integer n.

// Output

// Print a beautiful permutation of integers 1,2,…,n. If there are several solutions, you may print any of them. If there are no solutions, print "NO SOLUTION".


#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long
#define pb push_back
#define mp make_pair
#define MAX 1000001


using namespace std;

int main()
{
	ll n;
	cin>>n;
	if(n==1)
	{
		cout<<"1"<<endl;
	}
    else if(n<=3)
	{
		cout<<"NO SOLUTION"<<endl;
	}
	else if(n==4)
	{
		cout<<"2 4 1 3"<<endl;
	}
	else{
		 for (ll i = 1; i <= n; i += 2) cout << i << " ";
        for (ll i = 2; i <= n; i += 2) {
            cout << i;
            if (i + 2 <= n) cout << " ";
            else cout << endl;
		}
	}
}
