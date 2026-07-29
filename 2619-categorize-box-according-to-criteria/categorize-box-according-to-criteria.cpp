class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        string x,y;
        long long volume=1LL*length*width*height;
        if(length>=10000 || width>=10000 || height>=10000 ||mass >=10000 ||volume>=pow(10,9)){
            x="Bulky";
        }
        if(mass>=100){
            y="Heavy";
        }
        if(x=="Bulky" && y=="Heavy"){
            x="Both";
        }
        else  if(x!="Bulky" &&  y!="Heavy"){
            x="Neither";
        }
        else if(x=="Bulky" && y!="Heavy"){
            x="Bulky";
        }
        else{
            x="Heavy";
        }
        return x;

        
    }
};