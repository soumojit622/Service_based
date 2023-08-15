/*
//BRUTE FORCE SOLUTION
TC=O(NLOGN)  AS INSERTING IN SET TAKES OLOGN TIME
SC=O(N)
*/

/*
#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(int arr[], int n)
{
    set<int> s; // as set stores all unique element
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }

    int k = s.size();
    int j = 0;
    // put the unique elements in the original array
    for (auto x : s)
    {
        arr[j++] = x;
    }
    return k;
}
int main()
{
    int arr[] = {1, 1, 1, 2, 2, 3, 3, 3, 4, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int k = removeDuplicates(arr, n);

    cout << "Unique elements are:" << endl;
    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

*/
// OPTIMISED SOLUTION
//TC=O(n)
//SC=O(1)
#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(int arr[], int n)
{
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;
}
int main()
{
    int arr[] = {1, 1, 1, 2, 2, 3, 3, 3, 4, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int k = removeDuplicates(arr, n);

    cout << "Unique elements are:" << endl;
    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}