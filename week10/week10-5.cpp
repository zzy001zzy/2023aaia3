class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0,ten=0;
        for(int i:bills){
            if(i==5) five++;
            if(i==10) ten++,five--;
            if(i==20){
                if(ten>0){
                    ten--;
                    five--;
                }
                else{
                    five-=3;
                }
            }
            if(five<0||ten<0) return 0;
        }
        return 1;
    }
};