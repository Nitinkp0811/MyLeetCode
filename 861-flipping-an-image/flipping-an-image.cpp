class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();

        for(auto &row : image) {
            reverse(row.begin(), row.end());

            for(int &val : row) {
                val = 1 - val;
            }
        }

        return image;
    }
};