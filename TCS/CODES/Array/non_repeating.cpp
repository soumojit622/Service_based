/*
TC=O(nlogn)+O(N)
SC=O(1)
*/
/*
#include <bits/stdc++.h>
using namespace std;
void removeDuplicate(vector<int> &v)
{
    sort(v.begin(), v.end());

    //for first element
    if(v[0]!=v[1])cout<<v[0]<<" ";

    //for middle elements
    for (int i = 1; i < v.size()-1; i++)
    {
        if (v[i] != v[i + 1] && v[i]!=v[i-1])
        {
            cout << v[i] << " ";
        }
    }

    //for last element
    int n=v.size();
    if(v[n-1]!=v[n-2])cout<<v[n-1]<<" ";
}
int main()
{
    vector<int> v = {1, 1, 2, 3, 4, 4, 5, 2};
    removeDuplicate(v);

    return 0;
}

*/

/*
TC=O(N)
SC=O(n)
*/
#include <bits/stdc++.h>
using namespace std;
void removeDuplicate(vector<int> &v)
{
    unordered_map<int, int> mp;
    for (auto i : v)
    {
        mp[i]++;
    }

    for (auto i : mp)
    {
        if (i.second <= 1)
        {
            cout << i.first << " ";
        }
    }
}
int main()
{
    vector<int> v = {1, 1, 2, 3, 4, 4, 5, 2};
    removeDuplicate(v);

    return 0;
}