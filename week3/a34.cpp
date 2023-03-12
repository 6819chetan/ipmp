// Time Complexity: O(n)
// Auxiliary Space: O(1)

//{ Driver Code Starts
/* Driver program to test above function */

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int findSum(int a[], int n)
    {
        // code here.
        long long int p = INT_MIN, q = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > p)
                p = a[i];
            if (a[i] < q)
                q = a[i];
        }
        return p + q;
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
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        int ans = ob.findSum(arr, n);
        cout << ans;
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends