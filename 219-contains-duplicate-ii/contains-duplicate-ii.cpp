class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        /*
        for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]==nums[j] && abs(i-j)<=k) return true;
        }
       } 
       return false;
       */
       unordered_map<int,int> x;
       for(int i=0;i<nums.size();i++){
            if(x.find(nums[i])!=x.end()){
                if(abs(i-x[nums[i]]<=k)) return true;
            }
            x[nums[i]]=i;
       }
       return false;
    }
};