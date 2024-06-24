#include <vector>
#include <iostream>

using namespace std;

int countRectangles(vector<string>& board) {
    int n = board.size();
    int m = board[0].size();

    // Prefix sums for 'A' and 'B' in each row and column
    vector<vector<int>> rowSumA(n, vector<int>(m + 1, 0));
    vector<vector<int>> rowSumB(n, vector<int>(m + 1, 0));
    vector<vector<int>> colSumA(m, vector<int>(n + 1, 0));
    vector<vector<int>> colSumB(m, vector<int>(n + 1, 0));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            rowSumA[i][j + 1] = rowSumA[i][j] + (board[i][j] == 'A');
            rowSumB[i][j + 1] = rowSumB[i][j] + (board[i][j] == 'B');
            colSumA[j][i + 1] = colSumA[j][i] + (board[i][j] == 'A');
            colSumB[j][i + 1] = colSumB[j][i] + (board[i][j] == 'B');
        }
    }

    int result = 0;

    // Iterate through all possible rectangles
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            for (int k = i; k < n; ++k) {
                for (int l = j; l < m; ++l) {
                    // Calculate the number of 'A' and 'B' in the rectangle
                    int rectA = rowSumA[k][l + 1] - rowSumA[i][l + 1] - rowSumA[k][j] + rowSumA[i][j];
                    int rectB = rowSumB[k][l + 1] - rowSumB[i][l + 1] - rowSumB[k][j] + rowSumB[i][j];

                    rectA += colSumA[j][k + 1] - colSumA[i][k + 1] - colSumA[j][i] + colSumA[i][i];
                    rectB += colSumB[j][k + 1] - colSumB[i][k + 1] - colSumB[j][i] + colSumB[i][i];

                    // Check if the number of 'A' and 'B' are equal
                    if (rectA == rectB) {
                        ++result;
                    }
                }
            }
        }
    }

    return result;
}

int main() {
    // Example usage:
    vector<string> board1 = {"AB.", "B..", "..A"};
    cout << countRectangles(board1) << endl; // Output: 5

    vector<string> board2 = {"A.", "AB"};
    cout << countRectangles(board2) << endl; // Output: 0

    vector<string> board3 = {"...A", "...A", ".A"};
    cout << countRectangles(board3) << endl; // Output: 9

    vector<string> board4 = {"A", "A", "A"};
    cout << countRectangles(board4) << endl; // Output: 9

    return 0;
}
