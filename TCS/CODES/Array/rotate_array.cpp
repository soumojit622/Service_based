/*
TC=O(N)
SC=O(1)

Example:-1234567 ,k=3
1.first reverse the numbers form index 0 to n-k;
->4321 567
2.reverse the k elements from the last
->4321 765
3.now reverse the whole nums;
->5671234 Done Answer is here !!!!
*/
#include <bits/stdc++.h>
using namespace std;
void rotate(vector<int> &nums, int k)
{
    k = k % nums.size();
    reverse(nums.begin(), nums.begin() + (nums.size() - k));

    reverse(nums.begin() + (nums.size() - k), nums.end());

    reverse(nums.begin(), nums.end());
}

int main()
{
    int n = 5;
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int k;
    cout << "Enter the value of k: " << endl;
    cin >> k;
    rotate(arr, k);

    cout << "The rotated array is: " << endl;

    for (auto x : arr)
    {
        cout << x << " ";
    }
    return 0;
}