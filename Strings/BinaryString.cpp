class Solution
{
    public:
    //Function to count the number of substrings that start and end with 1.
    long binarySubstring(int n, string a){
        int count=0;
        // Your code here
        for(int i=0;i<a.size();i++){
            if(a[i]=='1'){
                count++;
            }
        }
        return (count*(count-1))/2;
        
    }
};
