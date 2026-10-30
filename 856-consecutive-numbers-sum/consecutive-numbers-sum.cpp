class Solution {
public:
    int consecutiveNumbersSum(int n) {
     /*
      // brute force approach
      int left=1;
      int count=0,sum=0;
      for(int right=1;right<=n;right++){
        sum+=right;
        while(sum>n){
            sum-=left;
            left++;
        }
        if(sum==n){
            count++;
        }
      }
      return count;
      */
      int count=0;
      for(int k=1;(2*n)>(k*(k-1));k++){
        if((n-k*(k-1)/2)%k==0) count++; 
      }
      return count;
    }
};