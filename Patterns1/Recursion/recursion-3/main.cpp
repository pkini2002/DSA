#include <bits/stdc++.h>

using namespace std;

void f(int n,int i){
    if(i>n)
        return;
    cout<<n<<endl;
    f(n-1,i);
}

int main()
{
    cout<<"Number of times you want your name to be printed: "<<endl;
    int n;
    cin>>n;
    f(n,1);
    return 0;
}
