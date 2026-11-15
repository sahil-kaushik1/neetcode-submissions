class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
             unordered_set<int> s1;
                unordered_set<int> s2;
            for(int j=0;j<9;j++){
               
                if(board[i][j]!='.'){
                    if(s1.count(board[i][j]) >0  ){
                        return false;
                    }
                    else s1.insert(board[i][j]);

                }
                if(board[j][i]!='.'){
                    if(s2.count(board[j][i]) >0  ){
                        return false;
                    }
                    else s2.insert(board[j][i]);
                }
            }
        }
        for(int i=0;i<9;i+=3){
            for(int j=0;j<9;j+=3){
                            unordered_set<int> s;

                if(s.count(board[j][i]))return false;
                else if(board[j][i] !='.') s.insert(board[j][i]);
                if(s.count(board[j][i+1]))return false;
                else if(board[j][i+1] !='.') s.insert(board[j][i+1]);
                if(s.count(board[j][i +2]))return false;
                else if(board[j][i+2] !='.') s.insert(board[j][i +2]);
                if(s.count(board[j +1 ][i]))return false;
                else if(board[j+1][i] !='.')s.insert(board[j +1][i]);
                if(s.count(board[j +1 ][i +1 ]))return false;
                else if(board[j+1][i+1] !='.')s.insert(board[j +1 ][i +1 ]);
                if(s.count(board[j +1 ][i +2 ]))return false;
                else if(board[j+1][i+2] !='.')s.insert(board[j+1][i +2]);
                if(s.count(board[j+2][i]))return false;
                else if(board[j+2][i] !='.')s.insert(board[j+2][i]);
                if(s.count(board[j+2][i +1]))return false;
                else if(board[j+2][i+1] !='.')s.insert(board[j+2][i +1 ]);
                if(s.count(board[j+2][i +2 ]))return false;
                else if(board[j+2][i+2] !='.')s.insert(board[j+2][i +2]);
            }
        }
        return true;
    }
};
