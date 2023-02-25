// Time Complexity:O(|a|+|b|).
// Expected Auxiliary Space: O(Number of distinct characters)

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b)
    {

        // Your code here
        if (a.size() != b.size())
            return 0;
        map<char, int> m;
        map<char, int> n;
        for (int i = 0; i < a.size(); i++)
        {
            m[a[i]]++;
            n[b[i]]++;
        }
        for (int i = 0; i < a.size(); i++)
        {
            if (m[a[i]] != n[a[i]])
                return 0;
        }
        return 1;
    }
};

//{ Driver Code Starts.

int main()
{

    int t;

    cin >> t;

    while (t--)
    {
        string c, d;

        cin >> c >> d;
        Solution obj;
        if (obj.isAnagram(c, d))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

// } Driver Code Ends