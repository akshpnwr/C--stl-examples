#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<char>> &grid, int row, int col, int rowSize, int colSize)
{
    if (row < 0 || col < 0 || row >= rowSize || col >= colSize)
        return;

    if (grid[row][col] == '0')
        return;

    grid[row][col] = '0';

    dfs(grid, row, col + 1, rowSize, colSize);
    dfs(grid, row, col - 1, rowSize, colSize);
    dfs(grid, row + 1, col, rowSize, colSize);
    dfs(grid, row - 1, col, rowSize, colSize);
}

int numIslands(vector<vector<char>> &grid)
{
    int rowSize = grid.size();
    int colSize = grid[0].size();
    int n = 0;

    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            if (grid[i][j] == '1')
            {
                dfs(grid, i, j, rowSize, colSize);
                n++;
            }
        }
    }

    return n;
}

int main()
{
    vector<vector<char>> grid = {
        {'1', '1', '1', '1', '0'},
        {'1', '1', '0', '1', '0'},
        {'1', '1', '0', '0', '0'},
        {'0', '0', '0', '0', '0'}};

    cout << numIslands(grid);

    return 0;
}