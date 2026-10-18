class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
       int sum=numBottles;
       while(numBottles>=numExchange){
            int remain=numBottles%numExchange;
            numBottles/=numExchange;
            sum+=numBottles;
            numBottles+=remain;
       }
       return sum;
    }
};