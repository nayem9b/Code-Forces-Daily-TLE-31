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
        vector<int> vec(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
            mp[vec[i]]++;
        }
        if (mp.size() == 1)
            cout << "Yes\n";
        else if (mp.size() >= 3)
            cout << "No\n";
        else
        {
            vector<int> vec1;
            for (auto it : mp)
            {
                vec1.push_back(it.second);
            }
            int diff = abs(vec1[0] - vec1[1]);
            if (diff <= 1)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }
    return 0;
}