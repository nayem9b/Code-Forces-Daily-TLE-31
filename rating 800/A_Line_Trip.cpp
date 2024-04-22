#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        };
        int mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int difference = vec[i] - vec[i - 1];
            mx = max(difference, mx);
        }
        mx = max(mx, vec[0] - 0);
        mx = max(mx, 2 * (x - vec[n - 1]));
        cout << mx << endl;
    };
    return 0;
}