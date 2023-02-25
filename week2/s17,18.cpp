// Time Complexity : O(N)
// Auxillary Space : O(M)

#include <iostream>
using namespace std;
int main()
{
    string t, p;
    cin >> t >> p;
    int m = p.size(), i = 1, j = 0, flag = 0;
    int n = t.size();
    int lps[m];
    lps[0] = 0;
    while (i < m)
    {
        if (p[j] == p[i])
        {
            j++;
            lps[i] = j;
            i++;
        }
        else
        {
            if (j == 0)
            {
                lps[i] = 0;
                i++;
            }
            else
            {
                j = lps[j - 1];
            }
        }
    }
    i = 0;
    j = 0;
    while (i < n)
    {
        if (t[i] == p[j])
        {
            i++;
            j++;
        }
        else
        {
            if (j == 0)
            {
                i++;
            }
            else
            {
                j = lps[j - 1];
            }
        }
        if (j == m)
        {
            printf("%d ", i - m);
            flag = 1;
        }
    }
    if (flag == 0)
    {
        printf("-1");
    }
}