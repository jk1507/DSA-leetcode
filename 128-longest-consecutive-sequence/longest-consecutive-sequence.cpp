class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int count=1;
        int longest=1;
        if(nums.empty()) return 0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]==nums[i]) continue;
            if(nums[i+1]-nums[i]==1) count++;
            else count=1;
            longest=max(longest,count);
        }
        return longest;
    }
};