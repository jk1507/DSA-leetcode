class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size(),h_index=0;
        sort(citations.begin(),citations.end());
        for(int i=n-1;i>=0;i--){
            int paper_count=n-i;
            if(citations[i]<paper_count){
                break;
            }
            h_index=paper_count;
        }
        return h_index;
    }
};