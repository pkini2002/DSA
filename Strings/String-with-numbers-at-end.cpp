class Solution{
public:	
		
		
	int isSame(string s)
	{
	    // Your code goes here
	    int count=0;
	    int n=s.size();
	    int val=0;
	   // int val=s[n-1]-48;
	    for(int i=0;i<n;i++){
	        if(s[i]>='a' && s[i]<='z'){
	            count++;
	        }
	        else{
	            val=val*10+(s[i]-48);
	        }
	    }
	    if(count==val){
	        return 1;
	    }
	    else{
	        return 0;
	    }
	}
};
