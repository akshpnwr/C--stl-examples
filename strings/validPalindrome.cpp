#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str = "A man, a plan, a canal: Panama";

    cout << str.length() << endl;

    str.erase(remove(str.begin(), str.end(), ' '), str.end());

    cout << str.length();

    return 0;
}