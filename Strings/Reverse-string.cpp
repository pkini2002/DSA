class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char>temp;
        for(int i=0;i<s.size();i++){
            temp.push_back(s[i]);
        }
        int j=0;
        for(int i=temp.size()-1;i>=0;i--){
            s[j]=temp[i];
            j++;
        }
    }
};
