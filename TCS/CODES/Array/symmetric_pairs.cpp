/*
TC=O(N^2)
SC=O(1)
*/
/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;

    int arr[][2] = {{1, 2}, {2, 1}, {3, 4}, {4, 5}, {5, 4}};
    cout << "The Symmetric Pairs are: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j][0] == arr[i][1] && arr[j][1] == arr[i][0])
            {
                cout << "(" << arr[i][1] << " " << arr[i][0] << ")"
                     << " ";
                break;
            }
        }
    }
}

/*

/*
TC=O(N)
SC=O(N)
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    int arr[5][2] = {{1, 2}, {2, 1}, {3, 4}, {4, 5}, {5, 4}};
    unordered_map<int, int> mp;
    cout << "The Symmetric Pairs are: " << endl;
    for (int i = 0; i < n; i++)
    {
        int first = arr[i][0];
        int second = arr[i][1];

        // if {second,first} existed previously,print them.
        if (mp.find(second) != mp.end() && mp[second] == first)
        {
            cout << "(" << first << " " << second << ")"
                 << " ";
        }
        // else store them in the map
        else
        {
            mp[first] = second;
        }
    }
}