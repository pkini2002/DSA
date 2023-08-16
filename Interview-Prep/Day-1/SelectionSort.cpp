// Ctrl+B to run the code
// Author: Prathiksha Kini


#include<iostream>
using namespace std;

void selectionsort(int a[],int n){
	int mini,i,j;
	for(i=0;i<=n-2;i++){
		mini=i;
		for(j=i+1;j<=n-1;j++){
			if(a[j]<a[mini]){
				mini=j;
			}
		}
		int temp=a[i];
		a[i]=a[mini];
		a[mini]=temp;
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

    selectionsort(a,n);

    for(int i=0;i<n;i++){
    	cout<<a[i]<<" ";
    }

	return 0;
}
