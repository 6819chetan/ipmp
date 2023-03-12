// Time Complexity: O(n)
// Auxiliary Space: O(m)

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
/*You are required to complete this method*/

// arr[] : the input array containing 0s and 1s
// N : size of the input array

// return the maximum length of the subarray
// with equal 0s and 1s
class Solution
{
public:
    int maxLen(int a[], int n)
    {
        // Your code here
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
                a[i] = -1;
        }
        for (int i = 1; i < n; i++)
            a[i] += a[i - 1];
        int p = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
                p = i + 1;
        }
        vector<int> v;
        map<int, int> m;
        map<int, int> s;
        for (int i = 0; i < n; i++)
        {
            if (m[a[i]] == 0)
            {
                m[a[i]]++;
                s[a[i]] = i;
            }
            else
                p = max(p, (i - s[a[i]]));
        }
        return p;
    }
};

//{ Driver Code Starts.

int main()
{
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        cout << obj.maxLen(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends