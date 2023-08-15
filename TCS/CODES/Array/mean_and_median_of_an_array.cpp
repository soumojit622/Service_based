// CPP program to find mean and median of
// an array

/*
To find median:
First, simply sort the array
Then, check if the number of elements present in the array is even or odd
If odd, then simply return the mid value of the array
Else, the median is the average of the two middle values

To find Mean:
At first, find the sum of all the numbers present in the array.
Then, simply divide the resulted sum by the size of the array
*/
#include <bits/stdc++.h>
using namespace std;

// Function for calculating mean
double findMean(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];

    return (double)sum / (double)n;
}

// Function for calculating median
double findMedian(int a[], int n)
{
    // First we sort the array
    sort(a, a + n);

    // check for even case
    if (n % 2 != 0)
        return (double)a[n / 2];

    return (double)(a[(n - 1) / 2] + a[n / 2]) / 2.0;
}

// Driver code
int main()
{
    int a[] = {1, 3, 4, 2, 7, 5, 8, 6};
    int N = sizeof(a) / sizeof(a[0]);

    // Function call
    cout << "Mean = " << findMean(a, N) << endl;
    cout << "Median = " << findMedian(a, N) << endl;
    return 0;
}
