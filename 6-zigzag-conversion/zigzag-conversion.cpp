class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;

        vector<string> rows(numRows);
        int curRow = 0;
        bool down = false;

        for (char c : s) {
            rows[curRow] += c;
            if (curRow == 0 || curRow == numRows - 1) down = !down;
            if (down) {
                curRow++;
            } else {
                curRow--;
            }
        }

        string result;
        for (const string& row : rows) {
            result += row;
        }
        return result;
    }
};
