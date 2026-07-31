class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int increase=1,decrease=1;
        if(nums.size()==1) return true;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>=nums[i+1]){
                decrease++;
            }
        }
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<=nums[i+1]){
                increase++;
            }
        if(increase==nums.size()|| decrease==nums.size()){
            return true;
        }
        }
        return false;
    }
};