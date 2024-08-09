#include <vector>
using namespace std;

class Solution {
public:
    bool checkMagic(const vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        if (n != 3 || m != 3) {
            return false;
        }

        int magicSum = 15; 

     
        vector<bool> seen(10, false);
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                int num = grid[i][j];
                if (num < 1 || num > 9 || seen[num]) {
                    return false;
                }
                seen[num] = true;
            }
        }

    
        for (int i = 0; i < 3; ++i) {
            int rowSum = 0;
            for (int j = 0; j < 3; ++j) {
                rowSum += grid[i][j];
            }
            if (rowSum != magicSum) {
                return false;
            }
        }


        for (int j = 0; j < 3; ++j) {
            int colSum = 0;
            for (int i = 0; i < 3; ++i) {
                colSum += grid[i][j];
            }
            if (colSum != magicSum) {
                return false;
            }
        }

  
        int diag1 = 0, diag2 = 0;
        for (int i = 0; i < 3; ++i) {
            diag1 += grid[i][i];
            diag2 += grid[i][2 - i];
        }
        if (diag1 != magicSum || diag2 != magicSum) {
            return false;
        }

        return true;
    }

    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int count = 0;
        int rows = grid.size();
        int cols = grid[0].size();

        for (int i = 0; i <= rows - 3; ++i) {
            for (int j = 0; j <= cols - 3; ++j) {
                vector<vector<int>> tempGrid(3, vector<int>(3));
                for (int x = 0; x < 3; ++x) {
                    for (int y = 0; y < 3; ++y) {
                        tempGrid[x][y] = grid[i + x][j + y];
                    }
                }
                if (checkMagic(tempGrid)) {
                    ++count;
                }
            }
        }
        return count;
    }
};
