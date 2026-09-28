class Solution {
public:
    int maxDepth(string s) {
        int n=s.length();
        string x="";
        for(int i=0;i<n;i++){
            if(s[i]=='(' || s[i]==')'){
                x=x+s[i];
            }
        }
        int count=0;
        int max_depth=0;
        for(int i=0;i<x.length();i++){
            if(x[i]=='('){
                count++;
                max_depth=max(max_depth,count);
            }
            else if(x[i]==')') count--;
        }
        return max_depth;
    }
};