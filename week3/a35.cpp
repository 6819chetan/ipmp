// Time Complexity: O(r*c)
// Auxiliary Space: O(r+c)

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to modify the matrix such that if a matrix cell matrix[i][j]
    // is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int>> &a)
    {
        // code here
        vector<int> r;
        vector<int> c;
        int m = a.size(), n = a[0].size();
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i][j] == 1)
                {
                    r.push_back(i);
                    c.push_back(j);
                }
            }
        }
        for (int i = 0; i < r.size(); i++)
        {
            for (int j = 0; j < n; j++)
            {
                a[r[i]][j] = 1;
            }
        }
        for (int i = 0; i < c.size(); i++)
        {
            for (int j = 0; j < m; j++)
            {
                a[j][c[i]] = 1;
            }
        }
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int row, col;
        cin >> row >> col;
        vector<vector<int>> matrix(row);
        for (int i = 0; i < row; i++)
        {
            matrix[i].assign(col, 0);
            for (int j = 0; j < col; j++)
            {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        ob.booleanMatrix(matrix);

        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}

// } Driver Code Ends