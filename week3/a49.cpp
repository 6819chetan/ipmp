// Time Complexity: O(nlogn)
// Auxiliary Space: O(k)

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    vector<int> kLargest(int a[], int n, int k)
    {
        // code here
        priority_queue<int, vector<int>, greater<int>> pq;
        vector<int> p(k);
        for (int i = 0; i < n; ++i)
        {
            pq.push(a[i]);
            if (pq.size() > k)
            {
                pq.pop();
            }
        }
        int i = k - 1;
        while (!pq.empty())
        {
            p[i] = pq.top();
            i--;
            pq.pop();
        }
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
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.kLargest(arr, n, k);
        for (auto x : ans)
        {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends