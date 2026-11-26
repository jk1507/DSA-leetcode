class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        /*int count=0,a,b;
        set<pair<int,int>> x;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(abs(nums[i]-nums[j])==k){
                     a =min(nums[i],nums[j]);
                    b=max(nums[i],nums[j]);
                    x.insert({a,b});
                }
            }
        }
        return x.size();
        */
        sort(nums.begin(),nums.end());
        int left=0;
        int right=1;
        int count=0;
        while(right<nums.size()){
            if(left==right){
                right++;
                continue;
            }
            int result=abs(nums[left]-nums[right]);
            if(result==k){
                count++;
                int a=nums[left];
                int b=nums[right];
                while(left<nums.size() && nums[left]==a){
                    left++;
                }
                while(right<nums.size() && nums[right]==b){
                    right++;
                }
            }
            else if(result<k){
                right++;
            }
            else{
                left++;
            }
        }
        return count;
    }
};