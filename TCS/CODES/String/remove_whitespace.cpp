/*
Time Complexity:  O(N)

Space Complexity: O(N)
*/
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "g e e k s f o r g e e k s";

    cout << "string with spaces is " << s << endl;

    int l = s.length(); // storing the length of the string

    int c = count(s.begin(), s.end(), ' '); // counting the number of whitespaces

    remove(s.begin(), s.end(), ' '); // removing all the whitespaces

    s.resize(l - c); // resizing the string to l-c

    cout << "string without spaces is " << s << endl;

    return 0;
}
*/

/*
Time Complexity:  O(N)

Space Complexity: O(1)
*/
#include <iostream>

using namespace std;

string removeSpaces(char str[])
{
    int count = 0; // spaces seen so far

    for (int i = 0; str[i]; i++)
        if (str[i] != ' ')
        {                        // if whitespace is present
            str[count] = str[i]; // remove whitespace
            count++;             // increment the count
        }

    str[count] = '\0';

    return str;
}

int main()
{
    char str[] = "Take you forward";
    cout << removeSpaces(str);

    return 0;
}