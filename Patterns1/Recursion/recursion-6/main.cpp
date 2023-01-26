#include <bits/stdc++.h>

using namespace std;

int f(int n){
    if(n==0)
        return 1;
    else
       return n*f(n-1);
}

int main()
{
    cout<<"Numbers upto which factorial needs to be computed: "<<endl;
    int n;
    cin>>n;
    cout<<f(n)<<endl;
    return 0;
}
