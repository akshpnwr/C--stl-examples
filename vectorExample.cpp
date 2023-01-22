#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Initilaser list
    vector<int> nums = {1, 2, 3, 4, 5};

    // Uniform initializatoin
    vector<int> v1{2, 3, 4, 5, 6};

    cout << "Before push_back: ";

    for (const int &i : nums)
    {
        cout << i << " ";
    }

    nums.push_back(6);
    nums.push_back(7);
    cout << "\nAfter push_back: ";
    for (const int &i : nums)
    {
        cout << i << " ";
    }

    cout << "\n\nAccessing value using at()";
    cout << "\n\nElement at index 0 : " << nums.at(0);
    cout << "\nElement at index 1 : " << nums.at(1);
    cout << "\nElement at index 2 : " << nums.at(2);

    cout << "\n\nBefore pop_back: ";

    for (const int &i : nums)
    {
        cout << i << " ";
    }

    nums.pop_back();
    nums.pop_back();

    cout << "\nAfter pop_back: ";

    for (const int &i : nums)
    {
        cout << i << " ";
    }
    return 0;
}
