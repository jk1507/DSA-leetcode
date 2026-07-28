class Solution {
public:
    int majorityElement(vector<int>& nums) {
    /*int count=0;
    int candidate;
    for(int i=0;i<nums.size();i++){
        if(count==0){
            candidate=nums[i];
        }
        if(nums[i]==candidate){
            count++;
        }
        else{
            count--;
        }
    }
    return candidate;
    }
    */
    int n=nums.size();
    unordered_map<int,int> result;
    for(int x:nums){
        result[x]++;
        if(result[x]>(n/2)){
          return x;
        }
    }
    return -1;
    }
};