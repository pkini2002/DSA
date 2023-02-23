class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        char val;
        int maxi=INT_MIN;
        map<char,int>mpp;
        for(int i=0;i<str.size();i++){
            mpp[str[i]]++;
        }
        
        for(auto it:mpp){
            if(it.second > maxi){
                maxi=it.second;
                val=it.first;
            }
        }
        return val;
    }

};
