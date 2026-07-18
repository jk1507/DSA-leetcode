class Solution {
public:
    string convert(string s, int numRows) {
    int i=0,n=s.length();
    int j=0;
    string Data[numRows];
    if(numRows==1 ){
        return s;
    }
    for(int i=0;i<numRows;i++){
        Data[i]="";
    }
    int index=0;
    while(index<n){
        while(index<n && i<numRows){
            Data[i].push_back(s[index]);
            index++;
            i++;
        }
        i+=-2;
        j++;
        while(index<n && i>=0){
            Data[i].push_back(s[index]);
            index++;
            i--;
            j++;
        }
        i=1;
        j--;
    }
    string ans="";
    for(int i=0;i<numRows;i++){
        ans+=Data[i];
    }
    return ans;
    }
};