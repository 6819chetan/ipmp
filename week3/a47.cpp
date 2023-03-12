// Time Complexity: O(n)
// Auxiliary Space: O(1)

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    // Returns maximum repeating element in arr[0..n-1].
    // The array elements are in range from 0 to k-1
    int maxRepeating(int *a, int n, int k)
    {
        // code here
        for (int i = 0; i < n; i++)
        {
            a[a[i] % k] += k;
        }
        int p = 0, q = 0, r = 0;
        ;
        for (int i = 0; i < n; i++)
        {
            int p = a[a[i] % k] / k;
            if (p > q)
                r = a[i] % k;
            else if (p == q)
                r = min(r, a[i] % k);
            q = max(p, q);
        }
        return r;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxRepeating(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends