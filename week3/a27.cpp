// Time Complexity: O(n)
// Auxiliary Space: O(n)

#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.first != b.first)
    {
        return a.first > b.first;
    }
    if (a.first == b.first)
    {
        if (a.second != b.second)
            return a.second < b.second;
    }
}
int main()
{
    // code
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector<pair<int, int>> v;
        map<int, int> m;
        for (int i = 0; i < n; i++)
            m[a[i]]++;
        for (auto i : m)
        {
            v.push_back({i.second, i.first});
        }
        sort(v.begin(), v.end(), cmp);
        int i = 0, j = v.size() - 1;
        while (i < n)
        {
            if (v[j].first > 0)
            {
                a[i] = v[j].second;
                v[j].first--;
                i++;
            }
            else
                j--;
        }
        for (int i = n - 1; i >= 0; i--)
            cout << a[i] << " ";
        cout << "\n";
    }
    return 0;
}