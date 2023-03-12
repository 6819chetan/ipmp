// Time Complexity : O(n)
// Auxiliary Space : O(1)

//{ Driver Code Starts
#include <iostream>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n)
    {

        // Your code here
        if (n == 1)
            return 1;
        long long int p = 0, q = a[0];
        for (int i = 2; i < n; i++)
            p += a[i];
        for (int i = 1; i < n - 1; i++)
        {
            if (p == q)
                return i + 1;
            q += a[i];
            p -= a[i + 1];
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main()
{

    long long t;

    // taking testcases
    cin >> t;

    while (t--)
    {
        long long n;

        // taking input n
        cin >> n;
        long long a[n];

        // adding elements to the array
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        Solution ob;

        // calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends