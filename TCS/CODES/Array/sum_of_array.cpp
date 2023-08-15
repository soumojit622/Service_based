// 1st approach
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    vector<int> arr = {1, 2, 3, 4, 5};
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += (double)arr[i];
    }

    cout << "The sum is: " << sum;
    return 0;
}
*/

// 2nd approach
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    int initialSum = 0;
    int ans = accumulate(arr, arr + n, initialSum);
    cout << "The sum is: " << ans;
    return 0;
}