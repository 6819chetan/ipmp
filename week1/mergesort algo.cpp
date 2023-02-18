#include <bits/stdc++.h>
using namespace std;
void merge(int a[], int l, int m, int h)
{
    int n1 = m - l + 1;
    int n2 = h - m;
    int p[n1], q[n2];
    for (int i = 0; i < n1; i++)
        p[i] = a[l + i];
    for (int i = 0; i < n2; i++)
        q[i] = a[m + 1 + i];
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
    {
        if (p[i] < q[j])
        {
            a[k] = p[i];
            i++;
            k++;
        }
        else
        {
            a[k] = q[j];
            j++;
            k++;
        }
    }
    while (i < n1)
    {
        a[k] = p[i];
        k++;
        i++;
    }
    while (i < n2)
    {
        a[k] = q[j];
        k++;
        j++;
    }
}
void mergesort(int a[], int l, int h)
{
    if (l < h)
    {
        int m = (l + h) / 2;
        mergesort(a, l, m);
        mergesort(a, m + 1, h);
        merge(a, l, m, h);
    }
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
    mergeSort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}