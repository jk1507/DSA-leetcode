class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //int k=1;
        /*for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                continue;
            }
            else{
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
        */
        unordered_set<int> unique(nums.begin(),nums.end());
        nums.assign(unique.begin(),unique.end());
        sort(nums.begin(),nums.end());
        return nums.size();
    }
};