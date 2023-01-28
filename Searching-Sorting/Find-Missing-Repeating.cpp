class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        sort(arr,arr+n);
        int *res=new int[2];
        
        set<int>s;
        long long N=n;
        for(int i=0;i<N;i++){
            s.insert(arr[i]);
        }
        
        long long int repeat;
        long long int sum1=(N*(N+1))/2;
        for(int i=0;i<N;i++){
            if(arr[i]==arr[i+1]){
               repeat=arr[i];
               continue;
            }
            sum1-=arr[i];
        }

        res[0]=repeat;
        res[1]=sum1;
        return res;
    }
};

// Different approach

class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        sort(arr,arr+n);
        long long int N=n;
        int *res=new int[2];
        
        set<int>s;
        for(int i=0;i<N;i++){
            s.insert(arr[i]);
        }
        
        for(int i=0;i<N;i++){
            if(arr[i]==arr[i+1]){
               res[0]=arr[i];
               break;
            }
        }
        
        long long int sum1=(N*(N+1))/2;
        long long int sum2=0;
        for(auto it=s.begin();it!=s.end();it++){
            sum2+=*it;
        }
        
        int result=sum1-sum2;
        res[1]=result;
        return res;
    }
};
