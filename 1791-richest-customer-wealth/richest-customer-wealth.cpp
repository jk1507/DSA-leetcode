class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m=accounts.size();
        int n=accounts[0].size();
        vector<int> x;
        for(int i=0;i<m;i++){
            int sum=0;
            for(int j=0;j<n;j++){
                sum+=accounts[i][j];
            }
            x.push_back(sum);
        }
        int max_val=*max_element(x.begin(),x.end());
        return max_val;
        
    }
};