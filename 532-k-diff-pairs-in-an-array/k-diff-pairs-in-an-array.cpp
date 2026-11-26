class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int count=0,a,b;
        set<pair<int,int>> x;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(abs(nums[i]-nums[j])==k){
                     a =min(nums[i],nums[j]);
                    b=max(nums[i],nums[j]);
                    x.insert({a,b});
                }
            }
        }
        return x.size();
    }
};