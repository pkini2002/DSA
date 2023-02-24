class Solution{
    public:
    
    string modify (string s)
    {
        // your code here
        char val=s[0];
        if(val >= 97 && val <=122){
             transform(s.begin(), s.end(), s.begin(), ::tolower);
        }
        else{
             transform(s.begin(), s.end(), s.begin(), ::toupper);
        }
        return s;
    }
};
