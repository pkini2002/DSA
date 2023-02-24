class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
    int findSum(string str)
    {
    	// Your code here
    	int sum=0;
    	int num=0;
    	for(int i=0;i<str.size();i++){
    	    if(str[i]>='0' && str[i]<='9'){
    	        num=num*10+(str[i]-48);
    	    }
    	    else{
    	      sum+=num;
    	      num=0;
    	    }
    	}
    	sum+=num;
    	return sum;
    }
};
