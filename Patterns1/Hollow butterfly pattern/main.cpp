#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
         int spaces=2*n-2*i;
        for(int j=1;j<=i;j++)
        {
            if(j==1 || j==i)
            {
            cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }

        for(int j=1;j<=spaces;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            if(j==1 || j==i)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }

     for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            if(j==1 || j==i)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        int spaces=2*n-2*i;
        for(int j=1;j<=spaces;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            if(j==1 || j==i)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}
