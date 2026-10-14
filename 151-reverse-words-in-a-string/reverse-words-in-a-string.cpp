class Solution {
public:
    string reverseWords(string s) {
        
        /*int n=s.length();
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
        */
        vector<string> x;
        stringstream i(s);
        string words;
        while(i>>words){
            x.push_back(words);
        }
        string ans="";
        for(int i=x.size()-1;i>=0;i--){
            ans+=x[i];
            if(i>0){
                ans+=" ";
            }
        }
        return ans;
    }
};
