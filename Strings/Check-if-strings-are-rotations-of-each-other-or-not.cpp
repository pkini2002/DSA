class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        // Your code here
        if(s1.size() != s2.size()){
            return 0;
        }
        
        for(int i=0;i<s1.size();i++){
            if(s1[i]==s2[0]){
                string ans="";
                ans=s1.substr(i,s1.size())+s1.substr(0,i);
                if(ans==s2){
                    return 1;
                }
            }
        }
        return 0;
    }
};
