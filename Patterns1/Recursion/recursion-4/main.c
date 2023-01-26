#include <bits/stdc++.h>

using namespace std;

int f(int n){
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return f(n+(n-1));
}

int main()
{
    cout<<"Sum of numbers that needs to be computed: "<<endl;
    int n;
    cin>>n;
    cout<<f(n)<<endl;
    return 0;
}
