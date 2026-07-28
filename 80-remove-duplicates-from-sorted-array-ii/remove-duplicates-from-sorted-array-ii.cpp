class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        /*int i=0;
        int k=1;
        int count= 1;
        for(i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                count++;
            }
            else{
                count=1;
            }
            if(count<=2){
                nums[k]=nums[i];
                k++;
            }
        }
        return k;*/
        unordered_map<int,int> counts;
        vector<int>result;
        for(int x:nums){
            if(counts[x]<2){
                result.push_back(x);
                counts[x]++;
            }
        }
        nums=move(result);
        return nums.size();
    }
};