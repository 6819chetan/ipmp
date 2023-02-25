// Time Complexity: O(|S|)
// Auxiliary Space: O(|S|)

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    string rremove(string s)
    {
        // code here
        string a;
        int i = 0;
        while (s[i] != '\0')
        {
            if (s[i] != s[i + 1] && s[i] != s[i - 1])
                a += s[i];
            i++;
        }
        if (a.size() == s.size())
            return a;
        return rremove(a);
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--)
    {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.rremove(s) << "\n";
    }
    return 0;
}
// } Driver Code Ends