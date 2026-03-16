class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int diagonalSum = 0;

        for(int i = 0; i < n; i++) {
            diagonalSum += mat[i][i];

            if(i != n - 1 - i) {
                diagonalSum += mat[i][n - 1 - i];
            }
        }

        return diagonalSum;
    }
};