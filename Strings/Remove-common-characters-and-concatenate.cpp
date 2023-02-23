class Solution
{
    public:
    //Function to remove common characters and concatenate two strings.
    string concatenatedString(string s1, string s2) 
    { 
        // Your code here
        string s="";
        unordered_map<char,int>mpp;
        unordered_map<char,int>mpp1;
        for(int i=0;i<s1.size();i++){
            mpp[s1[i]]++;
        }
        for(int i=0;i<s2.size();i++){
            mpp1[s2[i]]++;
        }
        
        for(int i=0;i<s1.size();i++){
            if(mpp1.find(s1[i])==mpp1.end()){
                s=s+s1[i];
            }
        }
         for(int i=0;i<s2.size();i++){
            if(mpp.find(s2[i])==mpp.end()){
                s=s+s2[i];
            }
        }
        if(s.size()==0)
                return "-1";
        return s;
    }

};
