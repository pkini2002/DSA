// Ctrl+B to run the code
// Author: Prathiksha Kini


#include<bits/stdc++.h>
using namespace std;

void merge(int b[],int p,int c[],int q,int a[]){
	int i=0;
	int j=0;
	int k=0;
	int n=p+q;

	while(j!=p && k!=q){
		if(b[j]<c[k]){
			a[i]=b[j];
			j++;
		}
		else{
			a[i]=c[k];
			k++;
		}
		i++;
	}

	if(j==p){
		for(i;i<n;i++){
			a[i]=c[k];
			k++;
		}
	}
	else{
		for(i;i<n;i++){
			a[i]=b[j];
			j++;
		}
	}
}

void mergesort(int a[],int n){
	if(n==1){
		return;
	}
	int l=n/2;
	int m=n-(n/2);

	int b[l],c[m];
	for(int i=0;i<l;i++){
		b[i]=a[i];
	}
	for(int i=0;i<m;i++){
		c[i]=a[l+i];
	}

	mergesort(b,l);
	mergesort(c,m);
	merge(b,l,c,m,a);
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

    mergesort(a,n);

    for(int i=0;i<n;i++){
    	cout<<a[i]<<" ";
    }

	return 0;
}
