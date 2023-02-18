#include <bits/stdc++.h>
using namespace std;
void revstr(string s, int p)
{
    if (p == -1)
        return;
    cout << s[p--];
    revstr(s, p);
}
int main()
{
    string s;
    cin >> s;
    revstr(s, s.size() - 1);
    return 0;
}