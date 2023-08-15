/*
Time Complexity:  O(N)

Space Complexity: O(N)
*/

#include <bits/stdc++.h> // Include standard C++ library headers

using namespace std; // Using the standard namespace

string solve(string str, int n) // Define a function named 'solve' that takes a string 'str' and an integer 'n'
{
    string ans = " ";                      // Initialize a string named 'ans' with a space character
    for (int i = 0; i < str.length(); i++) // Loop through each character in the input string 'str'
    {
        int ascii = (int)str[i]; // Convert the current character to its ASCII value and store it in the 'ascii' variable

        // Check if the ASCII value corresponds to an uppercase or lowercase letter
        if ((ascii >= 65 && ascii <= 90) || (ascii >= 97 && ascii <= 122))
        {
            ans.push_back(ascii); // Append the ASCII value to the 'ans' string
        }
    }
    return ans; // Return the 'ans' string containing filtered characters
}

int main() // Main function
{
    // Input string
    string str = "take12% *&u ^$#forward";
    int n = str.length(); // Get the length of the input string

    cout << "Resultant string:"
         << "\n";                  // Print a message indicating the resultant string is being displayed
    cout << solve(str, n) << "\n"; // Call the 'solve' function to process the input string and display the resultant string
    return 0;                      // Return 0 to indicate successful execution
}
