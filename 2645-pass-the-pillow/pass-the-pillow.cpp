class Solution {
public:
    int passThePillow(int n, int time) {
        int i;
        int person=1;
        bool direction=true;
        for(i=0;i<time;i++){
            if(direction) person++;
            else person--;
            if(person==n) direction=false;
            if(person==1) direction= true;
        }
        return person;
    }
};