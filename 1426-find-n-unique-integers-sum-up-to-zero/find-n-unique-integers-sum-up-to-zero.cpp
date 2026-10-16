class Solution {
public:
    vector<int> sumZero(int n) {
        /*vector<int> x(n);
        int mid=n/2;
        x[mid]=0;
        int val=1;
        for(int i=1;i<=n/2;i++){
            x[mid-i]=-val;
            x[mid+i]=val;
            val++;
        }
        return x;
        */
        vector<int> x;
        int mid=n/2;
        int value=1;
        for(int i=1;i<=n/2;i++){
            x.push_back(i);
            x.push_back(-i);
        }
        if(n%2!=0) x.push_back(0);
        return x;
    }
};