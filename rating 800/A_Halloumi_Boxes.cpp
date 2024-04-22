#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        if (k >= 2)
            cout << "YES\n";
        else
        {
            vector<int> p = vec;
            sort(p.begin(), p.end());
            if (vec == p)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    };
    return 0;
}