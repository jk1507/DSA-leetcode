class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int total_time=0;
        for(int i=1;i<points.size();i++){
            int x=abs(points[i][0]-points[i-1][0]);
            int y =abs(points[i][1]-points[i-1][1]);
             total_time+=min(x,y)+ abs(x-y);
        }
        return total_time;
    }
};