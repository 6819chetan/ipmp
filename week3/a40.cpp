// Time Complexity: O(n)
// Auxiliary Space: O(1)

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int p = 0, sum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        p = max(a[i], p + a[i]);
        sum = max(p, sum);
    }
    cout << sum;
    return 0;
}