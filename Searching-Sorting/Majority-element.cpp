class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // your code here
        map<int,int>mpp;
        for(int i=0;i<size;i++){
            mpp[a[i]]++;
        }
        
        for(auto it=mpp.begin();it!=mpp.end();it++){
            if(it->second > size/2){
                return it->first;
            }
        }
        return -1;
    }
};
