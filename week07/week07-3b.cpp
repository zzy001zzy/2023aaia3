class Solution {
public:
    bool isRobotBounded(string instructions) {
        int x=0,y=0,dir=0;
        int dx[4]={1,0,-1,0};
        int dy[4]={0,1,0,-1};
        for(char c:instructions){
            if(c=='G'){
                x+=dx[dir];
                y+=dy[dir];
            }
            if(c=='L')dir=(dir+3)%4;
            if(c=='R')dir=(dir+1)%4;
        }
        if(x==0&&y==0)return 1;
        else if(dir==0)return 0;
        return 1;
    }
};
