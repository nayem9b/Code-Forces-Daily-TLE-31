#include <bits/stdc++.h>
using namespace std;

int maxPolygons(int n, int sticks[])
{
    unordered_map<int, int> freq;
    int polygons = 0;
    for (int i = 0; i < n; i++)
    {
        freq[sticks[i]]++;
    }
    for (auto &it : freq)
    {
        if (it.second >= 4)
        {
            polygons += it.second / 4;
        }
    }
    return polygons;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if(n>100);
        int sticks[n];
        for (int i = 0; i < n; i++)
        {
            cin >> sticks[i];
        }
        cout << maxPolygons(n, sticks) <<" ";
    }

    return 0;
}