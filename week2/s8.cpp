// Time Complexity : O(N)
// Auxillary Space : O(1)

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        string str;
        cin >> str;

        cout << encode(str) << endl;
    }
    return 0;
}
// } Driver Code Ends

/*You are required to complete this function */

string encode(string a)
{
    // Your code here
    string s = "";
    int count = 1;
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i] == a[i - 1])
            count++;
        else
        {
            s += a[i - 1];
            s += count + '0';
            count = 1;
        }
    }
    s += a[a.size() - 1];
    s += count + '0';
    return s;
}
