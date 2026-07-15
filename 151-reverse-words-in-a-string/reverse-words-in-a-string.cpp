class Solution {
public:
    string reverseWords(string s) {
        int start=0;
        int n=s.length();
        string result="";
        reverse(s.begin(),s.end());
        for(int i=0;i<n;i++){
            string a="";
            while(i<n && s[i]==' '){
                i++;
            }
        while(s[i]!=' ' && i<n){
            a+=s[i];
            i++;
        }

        reverse(a.begin(),a.end());
        if(!a.empty()){
            if(!result.empty()){
                result+=" ";
            }
            result+=a;
        }
        }
         return result;
        }
       
    
};
