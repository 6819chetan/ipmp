//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    string pal(string q)
    {
        int a = 0;
        int b = q.size() - 1;
        while (a < b)
        {
            q[b] = q[a];
            a++;
            b--;
        }
        return q;
    }
    string solve(string s)
    {
        string p = pal(s), t;
        if (p > s)
            return p;
        int count = 0;
        for (int i = 0; i < p.size(); i++)
        {
            if (p[i] == '9')
                count++;
        }
        if (count == s.size())
        {
            string q = "";
            q += '1';
            for (int i = 0; i < count - 1; i++)
                q += '0';
            q += '1';
            return q;
        }
        else
        {
            int r = 1;
            for (int i = (p.size() - 1) / 2; i >= 0; i--)
            {
                int u = p[i] - '0' + r;
                if (u == 10)
                {
                    u = 0;
                    r = 1;
                }
                else
                    r = 0;
                p[i] = '0' + u;
            }
            t = pal(p);
        }
        return t;
    }
    vector<int> generateNextPalindrome(int a[], int n)
    {
        // code here
        string t;
        for (int i = 0; i < n; i++)
            t += a[i] + '0';
        string f = solve(t);
        vector<int> v;
        for (auto i : f)
            v.push_back(i - '0');
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
        int n;
        cin >> n;
        int num[n];
        for (int i = 0; i < n; i++)
        {
            cin >> num[i];
        }
        Solution ob;
        auto ans = ob.generateNextPalindrome(num, n);
        for (auto x : ans)
        {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends