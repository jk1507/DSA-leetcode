class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> x;
        for(int each:nums){
            x[each]++;
        }
        for(auto a:x){
            if(a.second==1){
                return a.first;
            }
        }
        return 0;
    }
};