class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1;
        unordered_set<int> set2;
        vector<int> result;
        for(int x:nums1){
            set1.insert(x);
        }
        for(int y:nums2){
            set2.insert(y);
        }
        for(int x:set1){
            if(set2.find(x)!=set2.end()){
                result.push_back(x);
            }
        }
        return result;
    }
};