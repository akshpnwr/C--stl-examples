#include <bits/stdc++.h>
using namespace std;

#include <iostream>
#include <unordered_map>

int palindromicTransformationCost(const std::string &str)
{
    std::unordered_map<char, int> charFrequency;

    // Step 1: Count the frequency of each character
    for (char ch : str)
    {
        charFrequency[ch]++;
    }

    // Step 2: Calculate the number of characters with odd frequency
    int oddFrequencyCount = 0;
    for (const auto &entry : charFrequency)
    {
        if (entry.second % 2 != 0)
        {
            oddFrequencyCount++;
        }
    }

    // Step 3: Calculate the palindromic transformation cost
    int transformationCost = oddFrequencyCount / 2;

    return transformationCost;
}

int printSubstrings(const std::string &str)
{
    int n = str.length();

    int total = 0;
    // Outer loop to select the starting index
    for (int i = 0; i < n; ++i)
    {
        // Inner loop to select the ending index
        for (int j = i; j < n; ++j)
        {
            // Print the substring from index i to j
            std::cout << str.substr(i, j - i + 1) << std::endl;
            total = total + palindromicTransformationCost(str.substr(i, j - i + 1));
        }
    }

    return total;
}

int main()
{

    string inputString = "abcaed";
    cout << printSubstrings(inputString);

    return 0;
}