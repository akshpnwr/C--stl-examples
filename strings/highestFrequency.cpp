#include <iostream>
using namespace std;

#define ASCII_SIZE 256

int main()
{

    string str = "temperrray";

    int count[ASCII_SIZE] = {0};

    int max = 0;
    char res;
    for (int i = 0; i < str.length(); i++)
    {
        count[str[i]]++;

        if (max < count[str[i]])
        {
            max = count[str[i]];
            res = str[i];
        }
    }

    cout << res << endl
         << max;

    return 0;
}