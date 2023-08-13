#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> mh;

    mh.push(4);
    mh.push(1);
    mh.push(3);

    cout << mh.top() << endl;

    mh.pop();

    cout << "Top element after pop : " << mh.top();

    priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> min_heap;

    min_heap.push({3, 2});
    min_heap.push({1, 1});

    vector<int> topEle = min_heap.top();

    return 0;
}
