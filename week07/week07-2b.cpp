class Solution {
public:
    void myPrintBoard(int board[3][3]){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<board[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    bool myTestWin(int board[3][3],int now){
        if(board[0][0]==now&&board[0][1]==now&&board[0][2]==now)return 1;
        if(board[1][0]==now&&board[1][1]==now&&board[1][2]==now)return 1;
        if(board[2][0]==now&&board[2][1]==now&&board[2][2]==now)return 1;

        if(board[0][0]==now&&board[1][0]==now&&board[2][0]==now)return 1;
        if(board[0][1]==now&&board[1][1]==now&&board[2][1]==now)return 1;
        if(board[0][2]==now&&board[1][2]==now&&board[2][2]==now)return 1;

        if(board[0][0]==now&&board[1][1]==now&&board[2][2]==now)return 1;
        if(board[2][0]==now&&board[1][1]==now&&board[0][2]==now)return 1;
        return 0;
    }
    string tictactoe(vector<vector<int>>& moves) {
        int board[3][3]={};
        int now=1;
        for(auto move:moves){
            int i=move[0],j=move[1];
            board[i][j]=now;
            //myPrintBoard(board);
            if(myTestWin(board,now)){
                if(now==1)return "A";
                else return "B";
            }
            now=3-now;
        }
        if(moves.size()==9)return "Draw";
        return "Pending";
    }
};