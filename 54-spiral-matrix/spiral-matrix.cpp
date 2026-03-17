class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int startRow = 0;
        int endRow = m - 1;
        int startColumn = 0;
        int endColumn = n - 1;

        vector<int> ans;

        while(startRow <= endRow && startColumn <= endColumn) {
            //Top
            for(int j = startColumn; j <= endColumn; j++) {
                ans.push_back(matrix[startRow][j]);
            }

            //Right
            for(int i = startRow + 1; i <= endRow; i++) {
                ans.push_back(matrix[i][endColumn]);
            }

            //Bottom
            for(int j = endColumn - 1; j>= startColumn; j--) {
                if(startRow == endRow) {
                    break;
                }
                ans.push_back(matrix[endRow][j]);
            }

            //Left
            for(int i = endRow - 1; i >= startRow + 1; i--) {
                if(startColumn == endColumn) {
                    break;
                }
                ans.push_back(matrix[i][startColumn]);
            }

            startRow++;
            endRow--;
            startColumn++;
            endColumn--;
        }

        return ans;
    }
};