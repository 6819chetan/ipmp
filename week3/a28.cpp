// Time Complexity: O(nlogn)
// Auxiliary Space: O(n)

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    void segregateEvenOdd(int a[], int n)
    {
        // code here
        sort(a, a + n);
        int b[n];
        int k = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                b[k] = a[i];
                k++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 != 0)
            {
                b[k] = a[i];
                k++;
            }
        }
        for (int i = 0; i < n; i++)
            a[i] = b[i];
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        ob.segregateEvenOdd(arr, n);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends