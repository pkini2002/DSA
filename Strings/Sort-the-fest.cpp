class Solution
{
	public:
		string is_common(vector<string>&s, vector<string>&t)
		{
		    // Code here
		    for(int i=0;i<s.size();i++){
		        for(int j=0;j<t.size();j++){
		            if(s[i]==t[j]){
		                return "CHANGE";
		            }
		        }
		    }
		    return "BEHAPPY";
		}
};
