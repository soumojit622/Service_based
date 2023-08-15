/*
TC=O(nlogn)
SC=O(n)
*/

#include <bits/stdc++.h>
using namespace std;

// Custom sorting function to sort pairs based on frequency and value
bool sortele(pair<int, int> a, pair<int, int> b)
{
    // Compare frequencies of a and b
    if (a.second == b.second)
        return a.first < b.first; // If frequencies are the same, sort by value in ascending order
    return a.second > b.second;  // If frequencies are different, sort by frequency in descending order
}

// Function to sort elements of an array by frequency
void Sortelementsbyfreq(int arr[], int n)
{
    // Create an unordered map to store the frequency of each element
    unordered_map<int, int> map;
    for (int i = 0; i < n; i++)
    {
        map[arr[i]]++;
    }

    // Create a vector of pairs to hold elements and their frequencies
    vector<pair<int, int>> vec;
    for (auto it = map.begin(); it != map.end(); it++)
    {
        vec.push_back({it->first, it->second});
    }

    // Sort the vector of pairs using the custom sorting function
    sort(vec.begin(), vec.end(), sortele);

    // Print the sorted elements based on frequency and value
    for (int i = 0; i < vec.size(); i++)
    {
        while (vec[i].second > 0)
        {
            cout << vec[i].first << " ";
            vec[i].second--;
        }
    }
    cout << endl;
}

int main()
{
    int arr[] = {3, 3, 5, 2, 1, 1, 2};
    int n = 7;

    // Call the function to sort elements by frequency
    Sortelementsbyfreq(arr, n);

    return 0;
}
