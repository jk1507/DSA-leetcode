class Solution {
public:
    string toLowerCase(string s) {
        /*for(char &x:s) x=tolower(x);
        return s;
        */
        for(char &x :s){
            if(x>='A' && x<='Z'){
                x=x+32;
            }
        }
        return s;
    }
};