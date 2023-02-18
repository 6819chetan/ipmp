#include <bits/stdc++.h>
using namespace std;
void sw(int a[], int i, int j)
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 10000;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
    int l = -1;
    while (l < n - 1)
    {
        int k = l + 1;
        for (int i = l + 1; i < n; i++)
        {
            if (a[k] >= a[i])
            {
                k = i;
            }
        }
        sw(a, l + 1, k);
        l++;
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}