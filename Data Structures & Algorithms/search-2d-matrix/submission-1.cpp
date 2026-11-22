class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int target) {
        int i = 0;
        int j = m.size() - 1;
        int row = -1;

        // First binary search: Find row
        while (i <= j) {
            int mid = (i + j) / 2;

            if (m[mid][0] <= target) {
                row = mid;
                i = mid + 1;
            }
            else {
                j = mid - 1;
            }
        }

        if (row == -1) return false;

        // Second binary search: Find element
        i = 0;
        j = m[row].size() - 1;

        while (i <= j) {
            int mid = (i + j) / 2;

            if (m[row][mid] == target)
                return true;
            else if (m[row][mid] < target)
                i = mid + 1;
            else
                j = mid - 1;
        }

        return false;
    }
};