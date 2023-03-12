// Time Complexity: O(n*m)
// Auxiliary Space: O(n*m)

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{

public:
    vector<int> downwardDiagonal(int n, vector<vector<int>> a)
    {
        // Your code goes here
        vector<vector<int>> v;
        for (int i = 0; i < 2 * n - 1; i++)
        {
            vector<int> p;
            v.push_back(p);
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                v[i + j].push_back(a[i][j]);
        }
        vector<int> p;
        for (int i = 0; i < 2 * n - 1; i++)
        {
            for (int j = 0; j < v[i].size(); j++)
                p.push_back(v[i][j]);
        }
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

        vector<vector<int>> A(n, vector<int>(n));

        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> A[i][j];

        Solution obj;
        vector<int> ans = obj.downwardDiagonal(n, A);

        for (auto i : ans)
            cout << i << " ";

        cout << "\n";
    }

    return 0;
}

// } Driver Code Ends