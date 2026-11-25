class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int last=nums.size()-1;
        int first=0;
        int mid=first+(last-first)/2;
        while(first<last){
            mid=first+(last-first)/2;
            if(nums[mid]>nums[mid+1]){
                last=mid;
            }
            else{
                first=mid+1;
            }
        }
        /*return nums[mid];
        int n=nums.size();
        for(int i=0;i<n;i++){
            bool x=(i==0 || nums[i]>nums[i-1]);
            bool y=(i==n-1 || nums[i]>nums[i+1]);
            if(x&&y){
                return i;
            }
        }
        return -1;
        */
        return first;
    }
};