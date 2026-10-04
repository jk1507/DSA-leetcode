class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // int maximum=INT_MIN;
        // int n=nums.size();
        // if(n==1) return nums[0];
        // for(int i=0;i<n;i++){
        //     for(int j=1;j<n;j++){
        //         int sum=0;
        //         for(int k=i;k<=j;k++){
        //             sum+=nums[k];
        //             maximum=max(maximum,sum);
        //         }
        //     }
        // }

        // int maximum=INT_MIN;
        // int n=nums.size();
        // if(n==1) return nums[0];
        // for(int i=0;i<n;i++){
        //     int sum=0;
        //     for(int j=i;j<n;j++){
        //         sum+=nums[j];
        //         maximum=max(maximum,sum);
        //     }
        // }  
        // return maximum;

        int sum=0;
        int n=nums.size();
        int maximum=INT_MIN;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum>maximum){
                maximum=sum;
            }
            if(sum<0) sum=0; 
        }
        return maximum;
    }
};
