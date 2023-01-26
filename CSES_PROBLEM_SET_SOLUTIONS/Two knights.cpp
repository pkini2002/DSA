// Time limit: 1.00 s Memory limit: 512 MB
// Your task is to count for k=1,2,…,n the number of ways two knights can be placed on a k×k chessboard so that they do not attack each other.

// Input

// The only input line contains an integer n.

// Output

// Print n integers: the results.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t=1;
    while(t--)
    {
        long long n;
        cin>>n;
        for(long long i=1;i<=n;i++)
        {
            cout<<(((i*i)*((i*i)-1))-8-24-((i-4)*16)-16-((i-4)*24)-((i-4)*(i-4)*8))/2<<endl;
        }
    }
    return 0;
}
