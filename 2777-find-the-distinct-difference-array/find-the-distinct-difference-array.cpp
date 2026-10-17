class Solution {
public:
    int count(vector<int>& nums,int start,int end){
        set<int> x;
        for(int i=start;i<=end;i++){
            x.insert(nums[i]);
        }
        return x.size();
    }
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        vector<int> x;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int prefix=count(nums,0,i);
            int sufix=count(nums,i+1,n-1);
            int ans=prefix-sufix;
            x.push_back(ans);
        }
        return x;
    }
};