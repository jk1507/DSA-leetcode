class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> factorStore;
        for(int i=1;i<=n;i++){
            if(n%i==0) {
                factorStore.push_back(i);
            }
        }
        int size=factorStore.size();
        if(size<k) return -1;
        return factorStore[k-1];
    }
};