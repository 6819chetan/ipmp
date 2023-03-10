//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> a)
    {
        // Code here.
        int p = 0, q = 0, r = 0;
        for (int i = 0; i < a.size(); i++)
            p ^= a[i];
        p = p & ~(p - 1);
        for (int i = 0; i < a.size(); i++)
        {
            if ((p & a[i]) == 0)
                q ^= a[i];
            else
                r ^= a[i];
        }
        if (q < r)
            return {q, r};
        return {r, q};
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> v(2 * n + 2);
        for (int i = 0; i < 2 * n + 2; i++)
            cin >> v[i];
        Solution ob;
        vector<int> ans = ob.singleNumber(v);
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends