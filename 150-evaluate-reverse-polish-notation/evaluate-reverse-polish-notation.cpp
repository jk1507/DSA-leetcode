class Solution {
public:
    int evalRPN(vector<string>& s) {
        int  n=s.size();
        stack<int> x;
        int i=0;
        while(i<n){
            if(s[i]=="+" || s[i]=="-" || s[i]=="*" || s[i]=="/"){
                int a=x.top();
                x.pop();
                int b=x.top();
                x.pop();
                int result;
                if(s[i]=="+"){
                    result=a+b;
                }
                else if(s[i]=="-"){
                    result=b-a;
                }
                else if(s[i]=="*"){
                    result=b*a;
                }
                else if(s[i]=="/"){
                    result=b/a;
                }
                x.push(result);
            }
            else{
                x.push(stoi(s[i]));
            }
            i++;
            }
            return x.top();
        }
};