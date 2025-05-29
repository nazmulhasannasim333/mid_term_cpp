#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, s;
        cin >> n >> s;
        int a[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        bool found = false;
        for (int x = 0; x < n && !found; x++)
        {
            for (int y = x + 1; y < n && !found; y++)
            {
                for (int z = y + 1; z < n && !found; z++)
                {
                    if (a[x] + a[y] + a[z] == s)
                    {
                        found = true;
                    }
                }
            }
        }
        if (found)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}