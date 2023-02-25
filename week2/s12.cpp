// Time Complexity:O( |String1| + |String2| )
// Auxiliary Space: O(K),Where K = Constant

//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for c++
class Solution
{
public:
    string removeChars(string s1, string s2)
    {
        // code here
        map<char, int> m;
        for (int i = 0; i < s2.size(); i++)
            m[s2[i]]++;
        int i = 0;
        while (i < s1.size())
        {
            if (m[s1[i]] != 0)
                s1.erase(i, 1);
            else
                i++;
        }
        return s1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string string1, string2;
        cin >> string1;
        cin >> string2;
        Solution ob;
        cout << ob.removeChars(string1, string2) << endl;
    }
    return 0;
}

// } Driver Code Ends