class Solution{
public:	
	
	int divisibleBy4 (string N)
	{
	    // Your Code Here
	    int n=N.size();
	    if(n==1 && N[0]=='0'){
	        return 1;
	    }
	    int lastdigit=N[n-1]-'0';
	    int secondlast=N[n-2]-'0';
	    int num=10*secondlast+lastdigit;
	    if(num % 4==0){
	        return 1;
	    }
	    else{
	        return 0;
	    }
	}
};
