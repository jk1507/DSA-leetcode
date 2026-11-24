class Solution {
public:
    bool isValid(string s) {
        stack<int> n;
        for(int i=0;i<s.length();i++){
            if(s[i]=='{' || s[i]=='(' || s[i]=='['){
                n.push(s[i]);
            }
            else{
                if(n.empty()) return false;
                 char t=n.top();
                 n.pop();
                if(s[i]=='}' && t!='{') return false;
                if(s[i]==']' && t!='[') return false;
                if(s[i]==')' && t!='(') return false;
            }
        }
        return n.empty();
    }
};