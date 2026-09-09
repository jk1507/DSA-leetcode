class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> x;
        unordered_map<string,char> y;
        stringstream ss(s);
        vector<string> text;
        string o;
        while(ss>>o) text.push_back(o);
        if(pattern.length()!=text.size()) return false;
        for(int i=0;i<pattern.size();i++){
            char ch=pattern[i];
            string a=text[i];
            if(x.count(ch) && x[ch]!=a) return false;
            if(y.count(a) && y[a]!=ch) return false;
            x[ch]=a;
            y[a]=ch;
        }
        return true;
    }
};