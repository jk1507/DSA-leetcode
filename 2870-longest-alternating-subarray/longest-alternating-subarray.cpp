class Solution {
public:
    int alternatingSubarray(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            int count=1;
            int add=1;
            int next=nums[i];
            for(int j=i+1;j<nums.size();j++){
                next+=add;
                if(nums[j]==next){
                    count++;
                    add=add*-1;
                }
                else{
                    break;
                }
            }
            ans=max(ans,count);
        }
        return ans==1?-1:ans;
    }
};