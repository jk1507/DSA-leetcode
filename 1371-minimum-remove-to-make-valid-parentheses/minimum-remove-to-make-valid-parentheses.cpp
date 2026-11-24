class Solution {
public:
    string minRemoveToMakeValid(string s) {
       string x="";
       int count=0;
       for(int i=0;i<s.length();i++){
        if(s[i]=='('){
            x.push_back(s[i]);
            count++;
        }
        else if(s[i]==')' && count>=1){
            x.push_back(s[i]);
            count--;
        }
        else if(s[i]!=')'){
            x.push_back(s[i]);
        }
       }
       string y="";
       count=0;
       for(int i=x.length()-1;i>=0;i--){
        if(x[i]==')'){
            y.push_back(x[i]);
            count++;
        }
        else if(x[i]=='(' && count>=1){
            y.push_back(x[i]);
            count--;
        }
        else if(x[i]!='('){
            y.push_back(x[i]);
        }
       }
       reverse(y.begin(),y.end());
       return y;
    }
};