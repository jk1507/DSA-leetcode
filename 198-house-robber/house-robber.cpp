class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        vector<int> x(n);
        x[0]=nums[0];
        x[1]=max(nums[1],nums[0]);
        for(int i=2;i<n;i++){
            x[i]=max(nums[i]+x[i-2],x[i-1]);
        }
        return x[n-1];
    }
};