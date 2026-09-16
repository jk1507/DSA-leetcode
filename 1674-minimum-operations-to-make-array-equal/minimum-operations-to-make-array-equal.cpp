class Solution {
public:
    int minOperations(int n) {
      /*
      int operations=0;
      vector<int> x(n);
      for(int i=0;i<n;i++){
        x[i]=(2*i)+1;
      }
      for(int i=0;i<x.size()/2;i++){
        if(x[i]<n){
            int sum=n-x[i];
            operations+=sum;
        }
      }
      return operations;
      */
      return (n*n)/4;
    }
};