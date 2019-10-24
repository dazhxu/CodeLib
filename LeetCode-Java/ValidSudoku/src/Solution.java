public class Solution {
    public boolean isValidSudoku(char[][] board) {
        int[] check = new int[9];
        for (int x=0;x<9;x+=3) {
            for(int y=0;y<9;y+=3) {
                check = new int[9];
                for(int i=x;i<x+3;++i) {
                    for(int j=y;j<y+3;++j) {
                        if(board[i][j] == '.') continue;
                        if(++check[board[i][j] - '1'] > 1)
                            return false;
                    }
                }
            }
        }

        for (int x=0;x<9;++x) {
            check = new int[9];
            for(int y=0;y<9;++y) {
                if(board[x][y] == '.') continue;
                if(++check[board[x][y] - '1'] > 1)
                    return false;
            }
        }

        for (int y=0;y<9;++y) {
            check = new int[9];
            for(int x=0;x<9;++x) {
                if(board[x][y] == '.') continue;
                if(++check[board[x][y] - '1'] > 1)
                    return false;
            }
        }

        return true;
    }
}
