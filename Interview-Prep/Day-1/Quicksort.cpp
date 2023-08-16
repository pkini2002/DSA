// Ctrl+B to run the code
// Author: Prathiksha Kini


#include<bits/stdc++.h>
using namespace std;

int partition(int a[],int l,int h){
	int i=l;
	int j=h;
	int p=a[l];

	while(i<=j){
		while(i>=l && a[i]<=p){
			i++;
		}
		while(a[j]>p && j<=h){
			j--;
		}
		int temp;
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	int temp;
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;

	int m;
	m=a[l];
	a[l]=a[j];
	a[j]=m;
	return j;
}

void divide(int a[],int l,int h){
	if(l<h){
		int m=partition(a,l,h);
		divide(a,l,m-1);
		divide(a,m+1,h);
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

    divide(a,0,n-1);

    for(int i=0;i<n;i++){
    	cout<<a[i]<<" ";
    }

	return 0;
}
