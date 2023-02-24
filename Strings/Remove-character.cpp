class Solution {
  public:
    string removeChars(string string1, string string2) {
        // code here
        map<char,int>mpp;
        string ans="";
        for(int i=0;i<string2.size();i++){
            mpp[string2[i]]++;
        }
        
        for(int i=0;i<string1.size();i++){
            if(mpp.find(string1[i])==mpp.end()){
                ans.push_back(string1[i]);
            }
        }
        return ans;
    }
};
