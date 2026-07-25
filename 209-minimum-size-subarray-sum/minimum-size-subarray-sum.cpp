class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minLen=INT_MAX;
        int low=0,sum=0;
     for(int high=0;high<nums.size();high++){
        sum+=nums[high];
        while(sum>=target){
            minLen=min(minLen,high-low+1);
            sum-=nums[low];
            low++;
        }
     }
     return (minLen==INT_MAX)?0:minLen;
    }
};