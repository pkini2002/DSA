#include <iostream>

using namespace std;

int main()
{
   int n,j;
   cout<<"Enter the value of n:"<<endl;
   cin>>n;
   for(int i=1;i<=n;i++)
   {
       int k=i;
       for(j=1;j<=(n-i);j++)
       {
          cout<<" ";
       }
       for(;j<=n;j++)
       {
           cout<<k;
           k--;
       }
       k=1;
       for(;j<(n+i);j++)
       {
           k++;
           cout<<k;
       }
       for(;j<=(2*n-1);j++)
       {
           cout<<" ";
       }
       cout<<endl;
   }
    return 0;
}
