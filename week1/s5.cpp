#include <bits/stdc++.h>
using namespace std;
void counter(string s)
{
    map<char, int> m;
    for (int i = 0; i < s.size(); i++)
        m[s[i]]++;
    for (auto i : m)
    {
        if (i.second > 1)
            cout << i.first << " "
                 << "count=" << i.second << "\n";
    }
}
int main()
{
    string s;
    cin >> s;
    counter(s);
    return 0;
}