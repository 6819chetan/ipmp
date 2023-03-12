// Time Complexity: O(n)
// Auxiliary Space: O(1)

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int p = 0;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        char pq;
        if (i % 2 != 0)
        {
            pq = s[i];
            s.erase(s.begin() + i);
            s += pq;
            p++;
        }
    }
    for (int i = s.size() - 1; i >= (s.size() + p) / 2; i--)
    {
        swap(s[i], s[s.size() + p - i - 1]);
    }
    cout << s;
    return 0;
}