// Time Complexity: O(n)
// Auxiliary Space: O(n)

//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int> &v, int n)
    {

        // code here
        long long int a[n], b[n], c[n];
        vector<long long int> p;
        a[0] = 1;
        b[n - 1] = 1;
        for (int i = 1; i < n; i++)
        {
            a[i] = v[i - 1] * a[i - 1];
        }
        for (int i = n - 2; i >= 0; i--)
        {
            b[i] = v[i + 1] * b[i + 1];
        }
        for (int i = 0; i < n; i++)
        {
            c[i] = a[i] * b[i];
            p.push_back(c[i]);
        }
        return p;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; // number of test cases
    cin >> t;
    while (t--)
    {
        int n; // size of the array
        cin >> n;
        vector<long long int> arr(n), vec(n);

        for (int i = 0; i < n; i++) // input the array
        {
            cin >> arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr, n); // function call

        for (int i = 0; i < n; i++) // print the output
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends