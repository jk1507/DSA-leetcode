class Solution {
public:
    bool isPalindrome(int x) {
        int temp=x;
        long long sum=0;
        int r;
        if(x<0) return false;
        while(x>0){
            r=x%10;
            sum=sum*10+r;
            x=x/10;
        }
        if(sum==temp){
            return true;
        }
        return false;
    }

};