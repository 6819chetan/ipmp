//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    set<string> p;
    void permute(string &a, int l, int r)
    {
        if (l == r)
            p.insert(a);
        else
        {
            for (int i = l; i <= r; i++)
            {
                swap(a[l], a[i]);
                permute(a, l + 1, r);
                swap(a[l], a[i]);
            }
        }
    }
    vector<string> find_permutation(string s)
    {
        // Code here there
        vector<string> v;
        permute(s, 0, s.size() - 1);
        for (auto i : p)
            v.push_back(i);
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
        string S;
        cin >> S;
        Solution ob;
        vector<string> ans = ob.find_permutation(S);
        for (auto i : ans)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends