// Ctrl+B to run the code
// Author: Prathiksha Kini


#include<bits/stdc++.h>
using namespace std;

void insertionsort(int a[],int n){
	int i,j,temp;
	for(i=1;i<n;i++){
		temp=a[i];
		for(j=i-1;j>=0;j--){
			if(temp>a[j]){
				break;
			}
			a[j+1]=a[j];		
		}
		a[j+1]=temp;
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

    insertionsort(a,n);

    for(int i=0;i<n;i++){
    	cout<<a[i]<<" ";
    }

	return 0;
}
