// Time Complexity : O(N3)
// Auxillary Space : O(N2)

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int>> fourSum(vector<int> &a, int r)
    {
        // Your code goes here
        if (a.size() < 4)
            return {};
        vector<vector<int>> v;
        sort(a.begin(), a.end());
        for (int i = 0; i < a.size(); i++)
        {
            for (int j = i + 1; j < a.size(); j++)
            {
                int k = j + 1, l = a.size() - 1;
                while (k < l)
                {
                    long long int p = 0;
                    p += a[i];
                    p += a[j];
                    p += a[k];
                    p += a[l];
                    if (p > r)
                        l--;
                    else if (p < r)
                        k++;
                    else
                    {
                        vector<int> q;
                        q.push_back(a[i]);
                        q.push_back(a[j]);
                        q.push_back(a[k]);
                        q.push_back(a[l]);
                        v.push_back(q);
                        while (k < l && q[2] == a[k])
                            k++;
                        while (k < l && q[3] == a[l])
                            l--;
                    }
                }
                while (j + 1 < a.size() && a[j] == a[j + 1])
                    j++;
            }
            while (i + 1 < a.size() && a[i] == a[i + 1])
                i++;
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
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int>> ans = ob.fourSum(a, k);
        for (auto &v : ans)
        {
            for (int &u : v)
            {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty())
        {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
