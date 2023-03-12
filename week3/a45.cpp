// Time Complexity: O(n)
// Auxiliary Space: O(n)

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// } Driver Code Ends
class Solution
{
public:
    // Function to find the maximum money the thief can get.
    int FindMaxSum(int a[], int n)
    {
        // Your code here
        vector<long long int> v(n, 0);
        if (n == 1)
            return a[0];
        if (n == 2)
            return max(a[0], a[1]);
        if (n == 3)
            return max(a[0] + a[2], a[1]);
        v[0] = a[0];
        v[1] = a[1];
        long long int q = max(v[0], v[1]);
        v[2] = a[2] + a[0];
        q = max(q, v[2]);
        long long int p = max(v[1], v[0]);
        for (int i = 3; i < n; i++)
        {
            p = max(v[i - 2], p);
            v[i] = a[i] + p;
            q = max(v[i], q);
        }
        return q;
    }
};

//{ Driver Code Starts.
int main()
{
    // taking total testcases
    int t;
    cin >> t;
    while (t--)
    {
        // taking number of houses
        int n;
        cin >> n;
        int a[n];

        // inserting money of each house in the array
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        Solution ob;
        // calling function FindMaxSum()
        cout << ob.FindMaxSum(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends