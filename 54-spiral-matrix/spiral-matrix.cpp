class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();
        int total_Elements = row * col;
        
        int startRow = 0, endRow = row - 1;
        int startCol = 0, endCol = col - 1;
        int count = 0;

        while (count < total_Elements) {
            for (int i = startCol; i <= endCol && count < total_Elements; i++) {
                ans.push_back(matrix[startRow][i]);
                count++;
            }
            startRow++;

            for (int i = startRow; i <= endRow && count < total_Elements; i++) {
                ans.push_back(matrix[i][endCol]);
                count++;
            }
            endCol--;

            for (int i = endCol; i >= startCol && count < total_Elements; i--) {
                ans.push_back(matrix[endRow][i]);
                count++;
            }
            endRow--;

            for (int i = endRow; i >= startRow && count < total_Elements; i--) {
                ans.push_back(matrix[i][startCol]);
                count++;
            }
            startCol++;
        }

        return ans;
    }
};
