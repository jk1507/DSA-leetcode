class Solution {
public:
    int search(vector<int>& a, int target) {
        int last=a.size()-1;
        int first=0;
        int mid=first+(last-first)/2;
        while(first<=last){
            mid=first+(last-first)/2;
            if(target==a[mid]){
                return mid;
            }
            if(target<a[mid]){
                last=mid-1;
            }
            else{
                first=mid+1;
            }
        }
        return -1;
    }
};