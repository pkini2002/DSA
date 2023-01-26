vector<int> find(int arr[], int n , int x )
{
    // code here
     vector<int>result;
     int lb=lower_bound(arr,arr+n,x)-arr;
     int ub=upper_bound(arr,arr+n,x)-arr-1;
     if(binary_search(arr,arr+n,x)){
         result.push_back(lb);
         result.push_back(ub);
         return result;
     }
     else{
         return {-1,-1};
     }
}
