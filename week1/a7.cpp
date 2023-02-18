#include <bits/stdc++.h>
using namespace std;
vector<int> nxtbignum(vector<int> p)
{
    int q = INT_MIN, r = 0;
    for (int i = p.size() - 1; i >= 1; i--)
    {
        if (p[i - 1] > p[i])
            r++;
        else if (p[i - 1] < p[i])
        {
            q = i - 1;
            break;
        }
    }
    if (r == p.size() - 1)
    {
        p.clear();
        return p;
    }
    for (int i = p.size() - 1; i >= 0; i--)
    {
        if (p[i] > p[q])
        {
            swap(p[i], p[q]);
            break;
        }
    }
    for (int i = q + 1; i <= (p.size() + q) / 2; i++)
    {
        int t = p[i];
        p[i] = p[p.size() - 1 + q + 1 - i];
        p[p.size() - 1 + q + 1 - i] = t;
    }
    return p;
}
int main()
{
    vector<int> v;
    int n, p;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> p;
        v.push_back(p);
    }
    for (int i = 0; i < n; i++)
        cout << v[i];
    cout << "\n";
    v = nxtbignum(v);
    for (int i = 0; i < n; i++)
        cout << v[i];
    return 0;
}