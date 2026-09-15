class Solution {
public:
    vector<int> closestDivisors(int num) {
        /*int Maximum=INT_MAX;
        vector<int> ans;
        for(int i=num+1;i<=num+2;i++){
            for(int j=sqrt(i);i>=1;j--){
                if(i%j==0){
                    int x=i/j;
                    if(x-i<Maximum){
                        Maximum=x-i;
                        ans={x,j};
                    }
                    break;
                }
            }
        }
        return ans;
        */
        for(int i=sqrt(num+2);i>=1;i--){
            if((num+1)%i==0){
                return {i,(num+1)/i};
            }
            if((num+2)%i==0) return {i,(num+2)/i};
        }
        return {};
    }
};