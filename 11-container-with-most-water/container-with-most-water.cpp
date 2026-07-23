class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left=0;
        int right=n-1,Maxarea=0;
        while(left<right){
            int width=min(height[left],height[right]);
            int length=right-left;
            Maxarea=max(Maxarea,length*width);
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return Maxarea;
        }
};