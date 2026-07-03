class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int max_repeat=0;
        int result=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2!=0){
                continue;
            }
            int count=0;
            for(int j=0;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    count++;
                }
            }
            if(count>max_repeat){
                max_repeat=count;
                result=nums[i];
            }
            if(count==max_repeat && nums[i]<result){
                result=nums[i];
            }
        }
    return result;
    }
};