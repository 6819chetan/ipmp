// Time Complexity: O(r*c)
// Auxiliary Space: O(r*c)

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int>> e, int m, int n)
    {
        // code here
        int a = 0, b = n - 1, c = m - 1, d = 0;
        vector<int> v;
        int count = m * n;
        while (count > 0)
        {
            if (count > 0)
            {
                for (int i = d; i <= b; i++)
                {
                    v.push_back(e[a][i]);
                    count--;
                }
                a++;
            }
            if (count > 0)
            {
                for (int i = a; i <= c; i++)
                {
                    v.push_back(e[i][b]);
                    count--;
                }
                b--;
            }
            if (count > 0)
            {
                for (int i = b; i >= d; i--)
                {
                    v.push_back(e[c][i]);
                    count--;
                }
                c--;
            }
            if (count > 0)
            {
                for (int i = c; i >= a; i--)
                {
                    v.push_back(e[i][d]);
                    count--;
                }
                d++;
            }
        }
        return v;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int r, c;
        cin >> r >> c;
        vector<vector<int>> matrix(r);

        for (int i = 0; i < r; i++)
        {
            matrix[i].assign(c, 0);
            for (int j = 0; j < c; j++)
            {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
            cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends