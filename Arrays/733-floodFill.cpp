#include <bits/stdc++.h>
using namespace std;

void floodFill(vector<vector<int>> &image, int sr, int sc, int color, int rows, int cols, int source)
{

    if (sr < 0 || sr >= rows)
        return;
    if (sc < 0 || sc >= cols)
        return;
    if (image[sr][sc] != source)
        return;

    image[sr][sc] = color;

    floodFill(image, sr - 1, sc, color, rows, cols, source);
    floodFill(image, sr, sc - 1, color, rows, cols, source);
    floodFill(image, sr + 1, sc, color, rows, cols, source);
    floodFill(image, sr, sc + 1, color, rows, cols, source);
}

int main()
{
    vector<vector<int>> image{
        {1, 1, 1},
        {1, 1, 0},
        {1, 0, 1}};

    int rows = image.size();
    int cols = image[0].size();
    int source = image[1][1];

    floodFill(image, 1, 1, 2, rows, cols, source);

    for (auto &row : image)
    {
        for (auto &val : row)
        {
            cout << val << " ";
        }

        cout << endl;
    }

    return 0;
}