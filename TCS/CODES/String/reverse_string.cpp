/*
Time Complexity:  O(N)

Space Complexity: O(N)
*/
// using stack
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<char> s;

    string str = "soumojit";
    for (auto i : str)
    {
        s.push(i);
    }

    cout << "Reversed string is :" << endl;
    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
    return 0;
}
*/

// using prebuild function
/*
Time Complexity:  O(N)

Space Complexity: O(1)
*/
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str="soumojit";
    reverse(str.begin(),str.end());
    for (auto i : str)
    {
        cout<<i;
    }
    return 0;
}
*/

/*
Time Complexity:  O(N)

Space Complexity: O(1)
*/

#include <bits/stdc++.h>

using namespace std;

void reverseStr(string &a)
{
    int i = 0;
    int j = a.length() - 1;

    while (i < j)
    {
        swap(a[i], a[j]);
        i++;
        j--;
    }
}

int main()
{

    string str = "HELLO";
    reverseStr(str);
    cout << "The reversed string is- " << str;

    return 0;
}