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
    // Function to find maximum product subarray
    long long maxProduct(vector<int> a, int n)
    {
        // code here
        long long int p = 1, prod = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != 0)
            {
                p *= a[i];
                prod = max(p, prod);
            }
            else
            {
                p = 1;
                if (prod < 0)
                    prod = 0;
            }
        }
        p = 1;
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] != 0)
            {
                p *= a[i];
                prod = max(p, prod);
            }
            else
            {
                p = 1;
                if (prod < 0)
                    prod = 0;
            }
        }
        return prod;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends