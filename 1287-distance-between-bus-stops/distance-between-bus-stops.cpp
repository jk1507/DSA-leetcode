class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int total=0,y=0;
        if(start>destination){
            swap(start,destination);
        }
        for(int x:distance){
            total+=x;
        }
        for(int i=start;i<destination;i++){
            y+=distance[i];
        }
        return min(y,total-y);
    }
};