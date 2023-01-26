/*You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.*/


// Input

// The only input line contains a string of n characters.

// Output

// Print one integer: the length of the longest repetition.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    long long int i,count=1,ans=1;
    for(i=1;i<s.length();i++)
    {
        if(s[i]==s[i-1])
        {
            count++;
        }
        else
        {
            count=1;
        }
        ans=max(ans,count);
    }
    cout<<ans<<endl;
    return 0;
}
