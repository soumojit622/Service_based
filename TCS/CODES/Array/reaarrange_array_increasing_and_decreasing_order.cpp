/*
TC= O(NLOGN)+O(N)+O(N)=O(NLOGN)
SC=O(1)
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {8, 7, 1, 6, 5, 9};
    int n = arr.size();

    sort(arr.begin(), arr.end()); // 1 5 6 7 8 9

    for (int i = 0; i < n / 2; i++)
    {
        cout << arr[i] << " ";
    }

    for (int i = n - 1; i >= n / 2; i--)
    {
        cout << arr[i] << " ";
    }

    return 0;
}