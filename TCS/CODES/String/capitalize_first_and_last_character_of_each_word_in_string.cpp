/*
Time Complexity:  O(N)

Space Complexity: O(1)
*/
#include <bits/stdc++.h>

using namespace std;

void Capitalize(string str, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (i == 0 || i == (size - 1))
        {
            str[i] = toupper(str[i]);
        }
        else if (str[i] == ' ')
        {
            str[i - 1] = toupper(str[i - 1]);
            str[i + 1] = toupper(str[i + 1]);
        }
    }
    cout << "String after capitalizing the first and last letter of each word of the string : "
         << "\n ";
    cout << str << "\n";
}
int main()
{

    // Input string
    string str = "take u forward is awesome";
    int size = str.length();

    Capitalize(str, size);
    return 0;
}