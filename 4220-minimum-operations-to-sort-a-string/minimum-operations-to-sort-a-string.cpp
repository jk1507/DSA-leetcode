class Solution {
public:
    bool isSorted(string  x){
        for(int i=0;i<x.size()-1;i++){
            if(x[i]>x[i+1]){
                return false;
            }
        }
        return true;
    }
    int minOperations(string s) {
        int n=s.length();
        if(n==1) return 0;
        if(isSorted(s)) return 0;
        if(n==2){
            if(isSorted(s)){
                return 0;
            }
            else{
                return -1;
            }
        }
        char minimum='z';
        char maximum='a';
        for(int i=0;i<n;i++){
             minimum=min(minimum,s[i]);
             maximum=max(maximum,s[i]);
        }
        if(s[0]==minimum || s[n-1]==maximum) return 1;
            for(int i=1;i<n-1;i++){
                if(minimum==s[i] || maximum==s[i]){
                    return 2;
                }
            }
            return 3;
        }

};