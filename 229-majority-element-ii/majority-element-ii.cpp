class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       /*unordered_map<int,int> x;
       vector<int> ans;
       int n=nums.size();
       for(int p:nums){
            x[p]++;;
       }
       for(auto a:x){
            if(a.second>n/3){
                ans.push_back(a.first);
            }
       }
       return ans;
       */ 

       unordered_map<int,int> result;
       int n=nums.size();
       vector<int> num;
       for(int x:nums){
         result[x]++;
         
    }
    for(auto entry:result){
        if(entry.second>(n/3)){
            num.push_back(entry.first);
        }
    }
    return num;
    }
};