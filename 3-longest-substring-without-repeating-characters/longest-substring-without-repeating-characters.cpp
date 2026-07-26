class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low=0,high=0,maxLength=0;
        unordered_set<char> Box;
            while(high<s.length()){
                if((Box.find(s[high]) == Box.end())){
                    Box.insert(s[high]);
                    maxLength=max(maxLength,high-low+1);
                    high++;
                }
                else{
                    Box.erase(s[low]);
                    low++;
                }
            }
            return maxLength;
        }

};