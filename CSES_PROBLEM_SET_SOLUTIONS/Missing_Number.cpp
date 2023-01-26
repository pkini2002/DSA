// You are given all numbers between 1,2,…,n except one. Your task is to find the missing number.

// Input

// The first input line contains an integer n.

// The second line contains n−1 numbers. Each number is distinct and between 1 and n (inclusive).

// Output

// Print the missing number.



#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,i;
    cin>>n;
    long long int a[n-1];
    for(i=0;i<n-1;i++)
    {
        cin>>a[i];
    }
    sort(a,a+(n-1));
    for(i=1;i<=n;i++)
    {
        if(a[i-1]!=i)
        {
            cout<<i;
            break;
        }
    }
    return 0;
}
