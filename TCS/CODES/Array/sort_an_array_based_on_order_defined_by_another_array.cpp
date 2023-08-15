/*
TC=O(mlogm)
SC=O(m)
*/

#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

void customSort(int first[], int second[], int m, int n)
{
    // map to store the frequency of each element of the first array
    unordered_map<int, int> freq;

    // find the frequency of each element of the first array and
    // store it in a map
    for (int i = 0; i < m; i++)
    {
        freq[first[i]]++;
    }

    // Note that once we have the frequencies of all elements of
    // the first array, we can overwrite elements of the first array

    int index = 0;

    // do for every element of the second array
    for (int i = 0; i < n; i++)
    {
        // If the current element is present on the map, print it `n` times
        // where `n` is the frequency of that element in the first array
        while (freq[second[i]])
        {
            first[index++] = second[i];
            freq[second[i]]--;
        }

        // erase the element from the map
        freq.erase(second[i]);
    }

    // Now we are left with elements only present in the first array,
    // but not in the second array.

    // Sort the remaining elements present on the map (Note that the keys are
    // already sorted if we use `std::map`)

    int i = index;
    for (auto it = freq.begin(); it != freq.end(); it++)
    {
        while (it->second--)
        {
            first[index++] = (it->first);
        }
    }

    // sort the remaining elements
    sort(first + i, first + index);
}

// Utility function to print the first `n` elements of an array `arr`
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int first[] = {5, 8, 9, 3, 5, 7, 1, 3, 4, 9, 3, 5, 1, 8, 4};
    int second[] = {3, 5, 7, 2};

    int m = sizeof(first) / sizeof(first[0]);
    int n = sizeof(second) / sizeof(second[0]);

    customSort(first, second, m, n);

    cout << "The array after sorting is ";
    printArray(first, m);

    return 0;
}