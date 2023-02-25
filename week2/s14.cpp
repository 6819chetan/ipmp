// Time Complexity: O(|S|).
// Auxiliary Space: O(K), where K is Constant.

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars(string S);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S;
        cin >> S;

        cout << longestSubstrDistinctChars(S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends

int longestSubstrDistinctChars(string s)
{
    // your code here
    if (s.size() <= 1)
    {
        if (s.size() == 0)
            return 0;
        else
            return 1;
    }
    else
    {
        int p = 0, q = 1, r = 0, l = 0, flag = 0;
        for (int i = 0; i < s.size() - 1; i++)
        {
            for (int j = p; j < q; j++)
            {
                if (s[j] == s[q])
                {
                    r = j;
                    flag = 1;
                }
            }
            // cout<<"p="<<p<<"q="<<q<<"r="<<r<<"\n";
            if (q == s.size() - 1 && flag == 0)
            {
                l = max(l, (q - p + 1));
                return l;
            }
            if (flag == 0)
            {
                l = max(l, (q - p + 1));
                q++;
            }
            if (flag == 1)
            {
                l = max(l, (q - r));
                p = r + 1;
                q++;
                flag = 0;
            }
        }
        return l;
    }
    return 0;
}