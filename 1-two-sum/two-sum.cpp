class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        int i=0;
        while(i<nums.size()){
            int key=target-nums[i];
            if(mp.find(key)!=mp.end()){
                return {mp[key],i};
            }
            mp[nums[i]]=i;
            i++;
        }
        return {};
    }
};