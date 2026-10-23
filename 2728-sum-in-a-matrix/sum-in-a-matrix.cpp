class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int m=nums.size();
        int n=nums[0].size();
        int sum=0;
        for(int i=0;i<m;i++){
            sort(nums[i].begin(),nums[i].end());
        }

        for(int i=n-1;i>=0;i--){
            int maximum=0;
            for(int j=0;j<m;j++){
                maximum=max(maximum,nums[j][i]);
            }
            sum+=maximum;
        }
        return sum;
    }
};