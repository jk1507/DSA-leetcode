class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> left_highest(height.size());
        vector<int> right_highest(height.size());
        int max1=0,max2=0;
        int sum=0;
        for(int i=0;i<height.size();i++){
            max1=max(max1,height[i]);
            left_highest[i]=max1;
        }
        for(int i=height.size()-1;i>=0;i--){
            max2=max(max2,height[i]);
            right_highest[i]=max2;
        }
        for(int i=0;i<height.size();i++){
            sum+= min(left_highest[i],right_highest[i])-height[i];
        }
        return sum;
    }
};