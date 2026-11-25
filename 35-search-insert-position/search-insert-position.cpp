class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        /*
        Time Complexity - O(n)
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=target){
                return i;
            }
        }
        return nums.size();
        */
        int first=0;
        int last=nums.size()-1;
        int mid=first+(last-first)/2;
        while(first<=last){
            mid=first+(last-first)/2;
            if(target==nums[mid]){
                return mid;
            }
            else if(target<nums[mid]){
                last =mid-1;
            }
            else{
                first=mid+1;
            }
        }
        return first;
    }
};