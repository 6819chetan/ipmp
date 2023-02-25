// Time Complexity : O(NlogN)
// Auxillary Space : O(1)

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    bool compare(int x, int y)
    {
        return abs(x) < abs(y);
    }
    int closestToZero(int a[], int n)
    {
        // your code here
        sort(a, a + n);
        int i = 0, j = n - 1;
        long long int s1 = 0, s2 = INT_MAX;
        while (i < j)
        {
            s1 = a[i] + a[j];
            if (abs(s1) == abs(s2) && s1 > 0)
                s2 = s1;
            if (abs(s1) < abs(s2))
                s2 = s1;
            if (s1 > 0)
                j--;
            else // if(s1<0)
                i++;
        }
        return s2;
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
            cin >> arr[i];
        Solution ob;
        cout << ob.closestToZero(arr, n) << endl;
    }
}
// } Driver Code Ends