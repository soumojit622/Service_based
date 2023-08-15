#include <bits/stdc++.h>
using namespace std;

class removeDuplicate
{

public:
    void duplicate(int arr[], int n)
    {

        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            if (mp.find(arr[i]) == mp.end())
            {
                cout << arr[i] << " ";
                mp[arr[i]]++;
            }
        }
    }
};
int main()
{

    int arr[] = {5,4,2,5,3,4,2,3,5};
    int n = 9;

    removeDuplicate d1;
    d1.duplicate(arr, n);

    return 0;
}