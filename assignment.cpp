int main()
{
    int n, d, n1, n2, c = 0, p = -1;
    cin >> n1 >> n2;
    repeat(n - 1)
    {
        cin >> n1;
        d = n1 - n2;
        n2 = n1;
        if (d == p)
        {
            c++;
            if (c == 1)
            {
                cout << "1\n";
                exit(0);
            }
        }
        else
            p = d;
        cout << "0\n";
        return 0;
    }