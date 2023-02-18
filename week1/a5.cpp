//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution
{
public:
    vector<long long int> twoOddNum(long long int a[], long long int n)
    {
        // code here
        int p = 0, q = 0, r = 0, t;
        for (long long int i = 0; i < n; i++)
            p = p ^ a[i];
        t = p & ~(p - 1);
        for (long long int i = 0; i < n; i++)
        {
            if ((a[i] & t) != 0)
                q ^= a[i];
            else
                r ^= a[i];
        }
        if (q > r)
            return {q, r};
        return {r, q};
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int N;
        cin >> N;
        long long int Arr[N];
        for (long int i = 0; i < N; i++)
            cin >> Arr[i];
        Solution ob;
        vector<long long int> ans = ob.twoOddNum(Arr, N);
        for (long long int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends