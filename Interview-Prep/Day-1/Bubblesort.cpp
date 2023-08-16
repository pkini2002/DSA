// Ctrl+B to run the code
// Author: Prathiksha Kini


#include<bits/stdc++.h>
using namespace std;

void bubblesort(int a[],int n){
	int i,j;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				swap(a[i],a[j]);
			}
		}
	}
}

int main(){

	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
    
    // Take the input number
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
    	cin>>a[i];
    }

    bubblesort(a,n);

    for(int i=0;i<n;i++){
    	cout<<a[i]<<" ";
    }

	return 0;
}
