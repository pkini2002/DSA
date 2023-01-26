void rotate(int arr[], int n)
{
    int val[n];
    for(int i=0;i<n;i++){
        val[i]=arr[i];
    }
    arr[0]=arr[n-1];
    for(int i=1;i<n;i++){
        arr[i]=val[i-1];
    }
}
