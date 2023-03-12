// Time Complexity: O(n*n)
// Auxiliary Space: O(m)

#include <bits/stdc++.h>
using namespace std;

vector<int> intersect(vector<vector<int>> v)
{
    map<int, int> m;
    for (int i = 0; i < v[0].size(); i++)
        m[v[0][i]]++;
    map<int, int> n;
    for (int i = 1; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            n[v[i][j]]++;
        }
        for (int j = 0; j < v[0].size(); j++)
            m[v[0][j]] = min(m[v[0][j]], n[v[0][j]]);
        n.clear();
    }
    vector<int> p;
    for (auto i : m)
    {
        while (i.second != 0)
        {
            p.push_back(i.first);
            i.second--;
        }
    }
    return p;
}
int main()
{
    vector<vector<int>> sets;
    vector<int> set1;
    set1.push_back(1);
    set1.push_back(1);
    set1.push_back(2);
    set1.push_back(2);
    set1.push_back(5);

    sets.push_back(set1);

    vector<int> set2;
    set2.push_back(1);
    set2.push_back(1);
    set2.push_back(4);
    set2.push_back(3);
    set2.push_back(5);
    set2.push_back(9);

    sets.push_back(set2);

    vector<int> set3;
    set3.push_back(1);
    set3.push_back(1);
    set3.push_back(2);
    set3.push_back(3);
    set3.push_back(5);
    set3.push_back(6);

    sets.push_back(set3);
    vector<int> p = intersect(sets);
    for (int i = 0; i < p.size(); i++)
        cout << p[i] << " ";
    return 0;
}