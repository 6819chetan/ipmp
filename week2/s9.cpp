// Time Complexity : O(N)
// Auxillary Space : O(1)

//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    /*You are required to complete this method */
    int atoi(string a)
    {
        // Your code here     45-
        int count = 0;
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] < '0' || a[i] > '9')
                count++;
        }
        if (count > 1)
            return -1;
        if (count == 1 && a[0] != '-')
            return -1;
        if (a[0] == '-')
        {
            count = 0;
            for (int i = 1; i < a.size(); i++)
                count = count * 10 + (a[i] - '0');
            count = 0 - count;
            return count;
        }
        else
        {
            count = 0;
            for (int i = 0; i < a.size(); i++)
                count = count * 10 + (a[i] - '0');
            return count;
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
        string s;
        cin >> s;
        Solution ob;
        cout << ob.atoi(s) << endl;
    }
}
// } Driver Code Ends