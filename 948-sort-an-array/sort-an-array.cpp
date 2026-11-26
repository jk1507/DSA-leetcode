class Solution {
public:
    void conquer(vector<int>& arr,int low,int mid,int high){
        int left=low;
        int right=mid+1;
        vector<int> temp;
        while(left<=mid && right<=high){
            if(arr[left]<arr[right]){
                temp.push_back(arr[left]);
                left++;
            }
            else{
                temp.push_back(arr[right]);
                right++;
            }
        }
        while(left<=mid){
            temp.push_back(arr[left]);
            left++;
        }
        while(right<=high){
            temp.push_back(arr[right]);
            right++;
        }
        for(int i=low;i<=high;i++){
            arr[i]=temp[i-low];
        }
    }
    void divide(vector<int>& arr,int low,int high){
        if(low>=high){
            return;
        }
        int mid=low+(high-low)/2;
        divide(arr,low,mid);
        divide(arr,mid+1,high);
        conquer(arr,low,mid,high);
    }
    vector<int> sortArray(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        divide(nums,low,high);
        return nums;
    }
};