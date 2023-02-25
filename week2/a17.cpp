// Time Complexity : O(NlogN)
// Auxillary Space : O(1)

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int minimum_difference(vector<int> a)
    {
        // Code here
        int d = INT_MAX;
        sort(a.begin(), a.end());
        for (int i = 1; i < a.size(); i++)
            d = min(d, a[i] - a[i - 1]);
        return d;
    }
};

//{ Driver Code Starts.
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++)
            cin >> nums[i];
        Solution ob;
        int ans = ob.minimum_difference(nums);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends