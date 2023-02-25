class Solution{
    public:
    /*You are required to complete this method */
    int remainderWith7(string n)
    {
        //Your code here
        int sum=0;
        for(int i=0;i<n.size();i++){
            int digit=n[i]-'0';
            sum=sum*10+digit;
            sum=sum%7;
        }
        return sum;
    }
};
