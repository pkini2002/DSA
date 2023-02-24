class Solution{
public:	
	
	string firstAlphabet(string S)
	{
	    // Your code goes here
	    string res="";
	    res+=S[0];
	    for(int i=0;i<S.size();i++){
	        if(S[i]==' '){
	            res+=S[i+1];
	        }
	    }
	    return res;
	}
};
