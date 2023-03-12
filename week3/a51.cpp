// Time Complexity: O(n)
// Auxiliary Space: O(n)

//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    // Function to find the leaders in the array.
public:
    vector<int> leaders(int a[], int n)
    {
        // Code here
        int p = a[n - 1];
        vector<int> v;
        v.push_back(p);
        for (int i = n - 2; i >= 0; i--)
        {
            if (a[i] >= p)
            {
                p = a[i];
                v.push_back(a[i]);
            }
        }
        for (int i = 0; i < v.size() / 2; i++)
        {
            p = v[i];
            v[i] = v[v.size() - 1 - i];
            v[v.size() - 1 - i] = p;
        }
        return v;
    }
};

//{ Driver Code Starts.

int main()
{
    long long t;
    cin >> t; // testcases
    while (t--)
    {
        long long n;
        cin >> n; // total size of array

        int a[n];

        // inserting elements in the array
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution obj;
        // calling leaders() function
        vector<int> v = obj.leaders(a, n);

        // printing elements of the vector
        for (auto it = v.begin(); it != v.end(); it++)
        {
            cout << *it << " ";
        }

        cout << endl;
    }
}

// } Driver Code Ends