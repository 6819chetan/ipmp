// Time Complexity: O(n)
// Auxiliary Space: O(n)

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    // Function to find length of longest bitonic
    // subarray
    int bitonic(vector<int> a, int n)
    {
        // code here
        int b[n], c[n];
        b[0] = 1;
        c[n - 1] = 1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] >= a[i - 1])
                b[i] = b[i - 1] + 1;
            else
                b[i] = 1;
        }
        for (int i = n - 2; i >= 0; i--)
        {
            if (a[i] >= a[i + 1])
                c[i] = c[i + 1] + 1;
            else
                c[i] = 1;
        }
        int p = 0;
        for (int i = 0; i < n; i++)
            p = max(p, (b[i] + c[i] - 1));
        return p;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.bitonic(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends