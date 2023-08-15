/*
TC= O(NlogN+ MlogN)
SC=O(1)
*/
/*
#include <bits/stdc++.h>
using namespace std;

// Binary search function to check if 'elem' is present in the sorted array 'arr' of size 'n'
bool bSearch(int elem, int arr[], int n){
    int start = 0;
    int end = n - 1;
    while(start <= end){
        int mid = (start + end) / 2;
        if(arr[mid] == elem)
            return true; // 'elem' found in 'arr'
        else if(arr[mid] < elem)
            start = mid + 1; // Search in the right half of the array
        else
            end = mid - 1; // Search in the left half of the array
    }
    return false; // 'elem' not found in 'arr'
}

// Function to check if 'arr1' (size 'm') is a subset of 'arr2' (size 'n')
bool isSubset(int arr1[], int m, int arr2[], int n){
    sort(arr2, arr2 + n); // Sort 'arr2' using a library function
    
    if(m > n) return false; // If size of 'arr1' is greater, it can't be a subset
    for(int i = 0; i < m; i++){
        bool present = bSearch(arr1[i], arr2, n); // Check if arr1[i] is in arr2
        if(present == false)
            return false; // If any element of 'arr1' is not in 'arr2', it's not a subset
    }
    return true; // All elements of 'arr1' were found in 'arr2', so it's a subset
}

int main() {
    int arr1[] = {1, 3, 4, 5, 2};
    int arr2[] = {2, 4, 3, 1, 7, 5, 15};
    
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    
    bool ans = isSubset(arr1, m, arr2, n);
    
    if(ans == true)
        cout << "arr1[] is a subset of arr2[]";
    else
        cout << "arr1[] is not a subset of arr2[]";
    
    return 0;
}

*/



/*
TC=O(N)+O(N)
SC=O(N)
*/

#include <bits/stdc++.h>
using namespace std;

bool isSubset(int arr1[], int m, int arr2[], int n)
{
    if (m > n)
        return false;            // Check if arr1 can be a subset of arr2
    unordered_map<int, bool> mp; // Create an unordered map to store elements of arr2
    for (int i = 0; i < n; i++)
    {
        mp[arr2[i]] = true; // Mark elements of arr2 as present in the map
    }
    for (int j = 0; j < m; j++)
    {
        if (mp.count(arr1[j]) == 0)
        {
            return false; // If any element of arr1 is not present in the map, it's not a subset
        }
    }
    return true; // All elements of arr1 were found in the map, so it's a subset
}

int main()
{
    int arr1[] = {1, 3, 4, 5, 2};
    int arr2[] = {2, 4, 3, 1, 7, 5, 15};

    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);

    bool ans = isSubset(arr1, m, arr2, n);

    if (ans == true)
        cout << "arr1[] is a subset of arr2[]";
    else
        cout << "arr1[] is not a subset of arr2[]";

    return 0;
}
