// Time Complexity : O(N)
// Auxiliary Space : O(N)

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    void rearrange(int a[], int n)
    {
        // code here
        vector<long long int> p;
        vector<long long int> q;
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= 0)
                p.push_back(a[i]);
            else
                q.push_back(a[i]);
        }
        int i = 0, j = 0, k = 0;
        while (i < p.size() && j < q.size())
        {
            if (k % 2 == 0)
            {
                a[k] = p[i];
                k++;
                i++;
            }
            else
            {
                a[k] = q[j];
                j++;
                k++;
            }
        }
        while (i < p.size())
        {
            a[k] = p[i];
            k++;
            i++;
        }
        while (j < q.size())
        {
            a[k] = q[j];
            j++;
            k++;
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
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends