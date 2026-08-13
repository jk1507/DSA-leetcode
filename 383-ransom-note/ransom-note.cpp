class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char ,int> x;
        for(char i:magazine){
            x[i]++;
        }
        for(char a:ransomNote){
            if(x[a]==0) return false;
            x[a]--;
        }

        return true;

    }
};