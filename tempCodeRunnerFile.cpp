int main()
{
    int n, a[10], c = 0, i, t;
    char B[10];
    double sp, s = 0, cp, tt;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> B[i] >> a[i];
    cin >> tt >> t;
    for (i = 0; i < n; i++)
    {
        c = c + a[i];
        switch (B[i])
        {
        case 'A':
            s += 10 * a[i];
            break;
        case 'B':
            s += 9 * a[i];
            break;
        case 'C':
            s += 8 * a[i];
            break;
        case 'D':
            s += 7 * a[i];
            break;
        case 'E':
            s += 6 * a[i];
            break;
        case 'F':
            s += 5 * a[i];
            break;
        case 'G':
            s += 4 * a[i];
            break;
        case 'H':
            s += 3 * a[i];
            break;
        case 'I':
            s += 2 * a[i];
            break;
        case 'J':
            s += 1 * a[i];
            break;
        case 'K':
            s += 0;
            break;
        }
    }
    sp = s / c;
    cp = (s + tt * t) / (c + t);
    cout << fixed << setprecision(2) << sp << "" << cp;
    return 0;
}