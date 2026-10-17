class Solution {
public:
    int sumofeven(vector<int>& nums,int x,int y){
        int sum=0;
        nums[y]+=x;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                sum+=nums[i];
            }
        }
        return sum;
    }
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> x;
        int n=queries.size();
        int m=queries[0].size();
        for(int i=0;i<n;i++){
            int index=queries[i][1];
            int value=queries[i][0];
            int ans=sumofeven(nums,value,index);
            x.push_back(ans);
            }
            return x;
        }

};