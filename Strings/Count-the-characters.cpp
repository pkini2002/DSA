class Solution
{
  public:
        int getCount (string S, int N)
        {
            //code here.
            map<char,int>mpp;
            for(int i=0;i<S.size();i++){
                 if(S[i]!=S[i+1]){
                   mpp[S[i]]++;
                }
            }
            
            int count=0;
            for(auto it:mpp){
                if(it.second==N){
                    count++;
                }
            }
            return count;
        }
};
