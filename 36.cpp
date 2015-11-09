#include <iostream>
#include <vector>
using namespace std;

// 提交代码开始
class Solution {  
public:  
    bool isValidSudoku(vector<vector<char> >& board) {   
        vector<vector<bool> > rows(9, vector<bool>(9, false));  
        vector<vector<bool> > cols(9, vector<bool>(9, false));  
        vector<vector<bool> > blocks(9, vector<bool>(9, false));  
  
        for(int i = 0; i < 9; i++)  
            for(int j = 0; j < 9; j++)  
            {  
                if(board[i][j] == '.') continue;  
                int num = board[i][j] - '1';  
                if(rows[i][num] || cols[j][num] || blocks[i - i % 3 + j / 3][num])  
                    return false;  
                rows[i][num] = cols[j][num] = blocks[i - i % 3 + j / 3][num] = true;  
            }  
        return true;  
    }  
};  
// 提交代码结束

int main() {
    char b[81] = {'.','8','7','6','5','4','3','2','1','2','.','.','.','.','.','.','.','.','3','.','.','.','.','.','.','.','.','4','.','.','.','.','.','.','.','.','5','.','.','.','.','.','.','.','.','6','.','.','.','.','.','.','.','.','7','.','.','.','.','.','.','.','.','8','.','.','.','.','.','.','.','.','9','.','.','.','.','.','.','.','.'};
    vector<vector<char> > board;
    vector<vector<char> >& cite = board;
    vector<char> tmp;
    for (int i = 0; i < (sizeof(b) / sizeof(b[0])); ++i)
    {
        tmp.push_back(b[i]);
        if (i % 9 == 8)
        {
            board.push_back(tmp);
            tmp.clear();
        }
    }
	Solution sol;

	// 检查结果是否正确
    cout << sol.isValidSudoku(cite) << endl;

	return 0;
}