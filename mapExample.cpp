#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{

    map<string, int> m1 = {
        {"akash", 10},
        {"tanishk", 20},
        {"gnja", 30}};

    m1["bava"] = 40;

    m1.at("bava") = 25;

    cout << "Size of the map(no of elements) : " << m1.size() << endl;

    for (auto &item : m1)
    {
        cout << item.first << " : " << item.second << endl;
    }

    unordered_map<string, int> m2 = {
        {"one", 1},
        {"two", 2},
        {"three", 3}};

    cout << endl;

    for (auto &item : m2)
    {
        cout << item.first << " : " << item.second << endl;
    }

    return 0;
}