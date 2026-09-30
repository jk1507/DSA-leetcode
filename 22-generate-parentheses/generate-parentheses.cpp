class Solution {
public:
    bool logic(string s){
           int i=0;
           int count=0;
           while(i<s.length()){
            if(s[i]=='('){
                count++;
            }
            if(s[i]==')'){
                count--;
            }
            if(count<0) return false;
            i++;
           }
           return count==0;
        }
    void generate(string s,int n,vector<string>& x){
        if(s.length()==2*n){
            if(logic(s)){
                x.push_back(s);
            }
            return;
        }
        generate(s+'(',n,x);
        generate(s+')',n,x);
    }
    vector<string> generateParenthesis(int n) {
        
        vector<string> x;
        generate("",n,x);
        return x;

    }
};