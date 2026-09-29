class Solution {
public:
    /*bool Palindrome(string s){
      int n=s.length();
        int left=0;
        int right=n-1;
        while(left<right){
            if(s[left]!=s[right]) return false;
            left++;
            right--;
        }
        return true;
    }*/
    string expand(string s,int left,int right){
        int n=s.length();
        while(left>=0 && right<n && s[left]==s[right]){
            left--;
            right++;
        }
        return s.substr(left+1,right-left-1);
    }
    string longestPalindrome(string s) {
          int n=s.length();
          if(n==1) return s;
        string longest="";
        for(int i=0;i<n;i++){
            string odd=expand(s,i,i);
            string even=expand(s,i,i+1);
            if(odd.length()>longest.length()) longest=odd;
            if(even.length()>longest.length()) longest=even;
        }
        return longest;
    }
};