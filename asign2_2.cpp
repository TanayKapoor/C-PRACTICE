#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n, a[10], t[10], i, j, d, r = 0;
    cin >> m >> n;
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < n; i++)
    {
        d = m * a[i] + r;
        t[i] = d % 10;
        r = d / 10;
    }
    if (r > 0)
        t[i++] = r % 10;
    for (j = 0; j < i; j++)
        cout << t[j] << "\n";

    return 0;
}