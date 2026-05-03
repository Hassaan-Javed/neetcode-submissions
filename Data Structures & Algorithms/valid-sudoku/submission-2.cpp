class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        // Check rows
        for (int i = 0; i < 9; i++)
        {
            unordered_set<char> seen;
            for (int j = 0; j < 9; j++)
            {
                char c = board[i][j];
                if (c != '.')
                {
                    if (seen.count(c)) return false;
                    seen.insert(c);
                }
            }
        }

        // Check columns
        for (int j = 0; j < 9; j++)
        {
            unordered_set<char> seen;
            for (int i = 0; i < 9; i++)
            {
                char c = board[i][j];
                if (c != '.')
                {
                    if (seen.count(c)) return false;
                    seen.insert(c);
                }
            }
        }

        // Check 3x3 boxes
        for (int i = 0; i < 9; i += 3)
        {
            for (int j = 0; j < 9; j += 3)
            {
                if (!isValidBox(board, i, j))
                    return false;
            }
        }

        return true;
    }

    bool isValidBox(vector<vector<char>> &board, int startRow, int startColumn)
    {
        unordered_set<char> seen;

        for (int i = startRow; i < startRow + 3; i++)
        {
            for (int j = startColumn; j < startColumn + 3; j++)
            {
                char c = board[i][j];
                if (c != '.')
                {
                    if (seen.count(c)) return false;
                    seen.insert(c);
                }
            }
        }

        return true;
    }
};