// Time Complexity : O(N)
// Auxillary Space : O(1)

#include <bits/stdc++.h>
using namespace std;
int maxdiff(int a[], int n)
{
    int d = 0, s = a[0];
    for (int i = 0; i < n; i++)
    {
        s = min(s, a[i]);
        d = max(d, a[i] - s);
    }
    return d;
}
int main()
{
    int n, m;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    m = maxdiff(a, n);
    cout << m;
    return 0;
}