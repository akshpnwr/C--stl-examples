#include <iostream>
using namespace std;

int main()
{

    pair<int, string> p = {
        1,
        "akash"};

    pair<int, string> p1 = p;

    p1.first = 2;
    p1.second = "tanishka";
    cout << p.first << " : " << p.second << endl;
    cout << p1.first << " : " << p1.second;

    return 0;
}