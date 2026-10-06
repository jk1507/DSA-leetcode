class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        vector<int> x;
        long long remainder=0;
        for(int i=0;i<word.length();i++){
            int digit=word[i]-'0';
             remainder=(remainder*10+digit)%m;
            if(remainder==0) x.push_back(1);
            else x.push_back(0);
        }
        return x;
    }
};