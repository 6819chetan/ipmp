// Time Complexity: O(n)
// Auxiliary Space: O(n)

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(int a[], int d, int n)
    {
        // code here
        int p = d % n;
        int b[n];
        for (int i = 0; i < n - p; i++)
            b[i] = a[i + p];
        for (int i = n - p; i < n; i++)
            b[i] = a[i - (n - p)];
        for (int i = 0; i < n; i++)
            a[i] = b[i];
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    // taking testcases
    cin >> t;

    while (t--)
    {
        int n, d;

        // input n and d
        cin >> n >> d;

        int arr[n];

        // inserting elements in the array
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        // calling rotateArr() function
        ob.rotateArr(arr, d, n);

        // printing the elements of the array
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends