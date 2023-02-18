//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to reverse words in a given string.
    string reverseWords(string s)
    {
        // code here
        vector<string> v;
        string p = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '.')
            {
                v.push_back(p);
                p = "";
            }
            else
                p += s[i];
        }
        v.push_back(p);
        p = "";
        for (int i = v.size() - 1; i >= 1; i--)
        {
            p += v[i];
            p += '.';
        }
        p += v[0];
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
        string s;
        cin >> s;
        Solution obj;
        cout << obj.reverseWords(s) << endl;
    }
}
// } Driver Code Ends