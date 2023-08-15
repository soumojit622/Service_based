/*
TC=O(N^2)+O(N)
SC=O(N)
*/
/*
#include<bits/stdc++.h>
using namespace std;
     void findRepeatingElements(int arr[],int n) {
        int dup[n];
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]==arr[j])
                {
                    dup[cnt++]=arr[i];
                }
            }
        }
        for(int i=0;i<cnt;i++)
        {
            if(dup[i]!=dup[i+1])
            cout<<dup[i]<<" ";
        }
    }
    int main() {
        int arr[] = {1,1,2,3,4,4,5,2};
        findRepeatingElements(arr,8);
    }

    */

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
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == v[i + 1])
        {
            cout << v[i] << " ";
        }
    }
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
        if (i.second > 1)
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