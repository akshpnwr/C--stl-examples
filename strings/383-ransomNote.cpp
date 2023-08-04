#include <bits/stdc++.h>
using namespace std;

bool canConstruct(string r, string m)
{

    unordered_map<char, int> myMap;

    for (int i = 0; i < m.size(); i++)
    {
        myMap[m[i]]++;
    }

    for (auto &character : r)
    {
        if (myMap.count(character) > 0 && myMap[character] > 0)
        {
            myMap[character]--;
        }
        else
            return false;
    }

    return true;
}

int main()
{
    string r = "back";
    string m = "dabckas";

    cout << canConstruct(r, m);

    return 0;
}