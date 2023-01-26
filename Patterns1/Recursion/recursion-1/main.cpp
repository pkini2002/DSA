#include <iostream>

using namespace std;

void f(string name,int n){
    int count=0;
    if(count==n)
        return;
    cout<<name<<endl;
    f(name,n-1);
    count++;
}

int main()
{
    cout<<"Number of times you want your name to be printed: "<<endl;
    int n;
    cin>>n;
    cout<<"Enter your name: ";
    string name;
    cin>>name;
    f(name,n);
    return 0;
}
