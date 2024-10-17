class Solution {
public:
    bool judgeCircle(string moves) {
        int LR=0,UD=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='U') UD++;
            else if(moves[i]=='D') UD--;
            else if(moves[i]=='L') LR++;
            else LR--;
        }
        if(LR==0 && UD==0) return 1;
        return 0;
    }
};