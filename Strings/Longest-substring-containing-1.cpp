int maxlength( string s)
{
// your code here
   int count=0;
   int maxi=INT_MIN;
   
   for(int i=0;i<s.size();i++){
       if(s[i]=='1'){
           count++;
           maxi=max(maxi,count);
       }
       else{
           count=0;
           maxi=max(maxi,count);
       }
   }
   return maxi;
}
