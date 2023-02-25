// Time Complexity : O(N)
// Auxillary Space : O(1)

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    // Function to find two repeated elements.
    vector<int> twoRepeated(int a[], int n)
    {
        // Your code here
        int p = 0;
        vector<int> v;
        for (int i = 0; i < n + 2; i++)
        {
            p = abs(a[i]);
            a[p] *= -1;
            if (a[p] > 0)
                v.push_back(p);
        }
        return v;
    }
};

//{ Driver Code Starts.

int main()
{
    int t, n;
    cin >> t;

    while (t--)
    {
        cin >> n;

        int a[n + 2];

        for (int i = 0; i < n + 2; i++)
            cin >> a[i];

        Solution obj;
        vector<int> res;
        res = obj.twoRepeated(a, n);
        cout << res[0] << " " << res[1] << endl;
    }
    return 0;
}

// } Driver Code Ends