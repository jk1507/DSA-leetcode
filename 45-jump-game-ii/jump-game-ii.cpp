class Solution {
public:
    int jump(vector<int>& nums) {
        int maxreach=0,count=0,lastPoint=0;
        int n=nums.size()-1;
        if(nums.size()==1) return 0;
        for(int i=0;i<nums.size()-1;i++){
            maxreach=max(maxreach,nums[i]+i);
            if(i==lastPoint){ count++;lastPoint=maxreach;}
            if(lastPoint==n){
                return count;
            }
        }
        return count;   
    }
};