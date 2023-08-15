/*
Time Complexity:  O(N)

Space Complexity: O(N)
*/
/*
#include <iostream>
using namespace std;

bool isVowel(char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

void removeVowel(string &s)
{
    string result = "";
    for (char c : s)
    {
        if (!isVowel(c))
        {
            result += c;
        }
    }
    s = result;
}

int main()
{
    string s = "soumojit";
    removeVowel(s);
    cout << s << endl;
    return 0;
}
*/

/*
Time Complexity:  O(N)

Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

// Function to check if a character is a vowel
bool isVowel(char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

// Function to remove vowels from the input string
void removeVowel(string &s)
{
    // Initialize a writeIndex to keep track of the position where non-vowel characters should be written
    int writeIndex = 0;

    // Iterate through the characters of the input string
    for (int readIndex = 0; readIndex < s.length(); readIndex++)
    {
        // Check if the current character is not a vowel
        if (!isVowel(s[readIndex]))
        {
            // If it's not a vowel, copy it to the position indicated by writeIndex and increment writeIndex
            s[writeIndex++] = s[readIndex];
        }
    }

    // Resize the string to the length of non-vowel characters
    s.resize(writeIndex);
}

int main()
{
    // Input string
    string s = "soumojit";

    // Call the removeVowel function to remove vowels from the input string
    removeVowel(s);

    // Print the modified string without vowels
    cout << s << endl;

    return 0;
}
