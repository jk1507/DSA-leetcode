class Solution {
public:
    vector<vector<int>> result;
    void slove(vector<int>& candidate,int target,int index,int sum,vector<int> & current){
        if(sum==target){
            result.push_back(current);
            return;
        }
        if(sum>target || index==candidate.size()){
            return;
        }
        //Left side push
        current.push_back(candidate[index]);
        slove(candidate,target,index,sum+candidate[index],current);
        current.pop_back();
        slove(candidate,target,index+1,sum,current);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
            vector<int> x;
            slove(candidates,target,0,0,x);
            return result;
    }
};