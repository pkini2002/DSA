class Solution{
public:	
	
	int divisibleBy11 (string S)
	{
	    int oddsum=0;
	    int evensum=0;
	    
	    for(int i=0;i<S.size();i++){
	        if(i%2==0){
	            evensum+=S[i]-'0';
	        }
	        else{
	            oddsum+=S[i]-'0';
	        }
	    }
	    
	    int diff=abs(oddsum-evensum);
	    if(diff % 11 ==0){
	        return 1;
	    }
	    else{
	        return 0;
	    }
	}
};
