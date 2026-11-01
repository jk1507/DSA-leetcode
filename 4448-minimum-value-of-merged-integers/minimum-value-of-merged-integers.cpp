class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int result=INT_MAX;
        for(int i=0;i<nums.size();i=i+2){
            int y=nums[i+1];
            int digits=0;
            while(y>0){
                digits++;
                y=y/10;
            }
            int merge=nums[i]*pow(10,digits)+nums[i+1];
            result=min(merge,result);
        }
        return result;
    }
};