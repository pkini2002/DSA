#include <iostream>

using namespace std;

int main()
{
   int n;
   cout<<"Enter the value of n:"<<endl;
   cin>>n;
   for(int i=n;i>=1;i--)
   {
       for(int j=1;j<=i;j++)
       {
           cout<<i<<" ";
       }
       cout<<endl;
   }
    return 0;
}
