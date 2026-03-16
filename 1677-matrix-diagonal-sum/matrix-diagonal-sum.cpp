class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int diagonalSum = 0;

        for(int i = 0; i < mat.size(); i++) {
            for(int j = 0; j < mat.size(); j++) {
                if(i == j) {
                    diagonalSum += mat[i][j];
                } 
                else if(j == mat.size() - 1 - i) {
                    diagonalSum += mat[i][j];
                }
            }
        }

        return diagonalSum;
    }
};