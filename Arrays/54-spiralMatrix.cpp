#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    int left = 0;
    int right = matrix[0].size();
    int top = 0;
    int bottom = matrix.size();

    vector<int> res;

    while (left < right && top < bottom)
    {
        // get every i in top row
        for (int i = left; i < right; i++)
            res.push_back(matrix[top][i]);
        top++;

        // get every i in right col
        for (int i = top; i < bottom; i++)
            res.push_back(matrix[i][right - 1]);
        right--;

        if (!(left < right and top < bottom))
            break;

        // get every i in bottom row
        for (int i = right - 1; i >= left; i--)
            res.push_back(matrix[bottom - 1][i]);
        bottom--;

        // get every i in left col
        for (int i = bottom - 1; i >= top; i--)
            res.push_back(matrix[i][left]);
        left++;
    }

    return res;
}

int main()
{

    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    vector<int> res;

    res = spiralOrder(matrix);

    for (auto &num : res)
    {
        cout << num << " ";
    }

    return 0;
}