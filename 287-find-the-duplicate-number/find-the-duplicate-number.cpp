class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> x;
        for(int i:nums){
            x[i]++;
            if(x[i]>1) return i;
        }/*

        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    return nums[i];
                }
            }
        }
        return -1;
        */    
        return -1;
    }
};