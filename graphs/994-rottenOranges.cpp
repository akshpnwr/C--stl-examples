#include <bits/stdc++.h>
using namespace std;

int orangesRotting(vector<vector<int>> &grid)
{
    queue<vector<int>> mq;

    int rows = grid.size();
    int cols = grid[0].size();
    int fresh = 0, time = 0;

    for (int r = 0; r < rows; r++)
    {
        for (int c = 0; c < cols; c++)
        {
            if (grid[r][c] == 1)
                fresh++;
            if (grid[r][c] == 2)
                mq.push({r, c});
        }
    }

    vector<vector<int>> directions = {{0, 1},
                                      {0, -1},
                                      {1, 0},
                                      {-1, 0}};

    while (!mq.empty() && fresh > 0)
    {
        int qSize = mq.size();

        for (int i = 0; i < qSize; i++)
        {
            int r = mq.front()[0];
            int c = mq.front()[1];

            mq.pop();

            for (auto &dir : directions)
            {
                int row = r + dir[0];
                int col = c + dir[1];

                if (row < 0 || col < 0 || row >= rows || col >= cols || grid[row][col] != 1)
                    continue;

                grid[row][col] = 2;

                mq.push({row, col});
                fresh--;
            }
        }
        time++;
    }

    return fresh == 0 ? time : -1;
}
int main()
{

    vector<vector<int>> grid = {{2, 1, 1},
                                {1, 1, 1},
                                {0, 1, 2}};

    cout << orangesRotting(grid);
    return 0;
}