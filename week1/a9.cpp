#include <bits/stdc++.h>
using namespace std;
int counttriplets(int n)
{
    int count = 0, flag = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            long long int x = i * i + j * j;
            long long int q = sqrt(x);
            if (q * q == x && q <= n)
            {
                count++;
                cout << i << " " << j << " " << x << " " << q << "\n";
            }
        }
    }
    return count;
}
int main()
{
    int n;
    cin >> n;
    int count = counttriplets(n);
    cout << count;
    return 0;
}