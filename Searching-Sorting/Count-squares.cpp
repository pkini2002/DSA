class Solution {
  public:
    int countSquares(int N) {
        // code here
        // int squareroot=sqrt(N);
        int count=0;
        for(int i=1;i<sqrt(N);i++){
            count++;
        }
        return count;
    }
};
