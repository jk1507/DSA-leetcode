class Solution {
public:
    static bool compare(pair<int,int> a,pair<int,int> b){
        return a.second>b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<int> result;
        for(int x : nums){
            mp[x]++;
        }
        vector<pair<int,int>> v;
        for(auto x :mp){
            v.push_back({x.first,x.second});
        }
        sort(v.begin(),v.end(),compare);
        for(int i=0;i<k;i++){
            result.push_back(v[i].first);
        }
        return result;
    }
};