#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    int initialSum = 0;
    float ans = (float)accumulate(arr, arr + n, initialSum) / 2;
    cout << "The sum is: " << ans;
    return 0;
}