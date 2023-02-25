// Time Complexity : O(N)
// Auxillary Space : O(1)

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to find the smallest positive number missing from the array.
    int missingNumber(int a[], int n)
    {
        // Your code here
        for (int i = 0; i < n; i++)
        {
            while (a[i] > 0 && a[i] <= n && a[i] != a[a[i] - 1])
            {
                int t = a[a[i] - 1];
                a[a[i] - 1] = a[i];
                a[i] = t;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] != i + 1)
                return i + 1;
        }
        return n + 1;
    }
};

//{ Driver Code Starts.

int missingNumber(int arr[], int n);

int main()
{

    // taking testcases
    int t;
    cin >> t;
    while (t--)
    {

        // input number n
        int n;
        cin >> n;
        int arr[n];

        // adding elements to the array
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        Solution ob;
        // calling missingNumber()
        cout << ob.missingNumber(arr, n) << endl;
    }
    return 0;
}
// } Driver Code Ends