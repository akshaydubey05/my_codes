#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int k = 1;
        for (int i = 0; i < n; i++)
        {
            if (!i)
            {
                if (k == a[i])
                    k++;
                continue;
            }
            k++;
            if (a[i] == k)
            {
                k++;
            }
        }
        cout << k << endl;
    }
}