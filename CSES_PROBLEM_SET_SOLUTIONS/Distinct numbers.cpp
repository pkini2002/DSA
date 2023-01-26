// You are given a list of n integers, and your task is to calculate the number of distinct values in the list.

// Input

// The first input line has an integer n: the number of values.

// The second line has n integers x1,x2,…,xn.

// Output

// Print one integers: the number of distinct values.

#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long
#define pb push_back
#define mp make_pair
#define MAX 1000001
#define rep(i,a,b) for(int i=a,i<b;i++)
#define ff first
#define ss second
#define vi vector<int>
#define vvi vector<vi>



using namespace std;

int main()
{
	ll n,ele,i;
	cin>>n;
	set<int>s;
	for(i=0;i<n;i++)
	{
		cin>>ele;
		s.insert(ele);
	}
	cout<<s.size()<<endl;
	return 0;
}
