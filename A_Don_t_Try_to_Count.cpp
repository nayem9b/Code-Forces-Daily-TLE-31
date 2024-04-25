#include <bits/stdc++.h>
using namespace std;
string charToString(char *a, int s)
{
    string tmp = "";
    for (int i = 0; i < s; i++)
    {
        tmp = tmp + a[i];
    }
    return tmp;
}
int subStringCheck(string a, string b)
{
    int operation = -1;
    while (a.length() <= 100)
    {
        operation += 1;
        for (int i = 0; i < a.length(); i++)
        {
            for (int j = 0; j < b.length(); j++)
            {
                if (b[j] != a[i + j])
                    break;
                else if (j == b.length() - 1)
                {
                    return operation;
                }
            }
        }
        a = a + a;
    }
    return -1;
}
int main()
{
    int t, n, m;
    cin >> t;
    int output[t];
    for (int i = 0; i < t; i++)
    {
        cin >> n >> m;
        char x[n], y[m];

        for (int j = 0; j < n; j++)
        {
            cin >> x[j];
        }
        for (int j = 0; j < m; j++)
        {
            cin >> y[j];
        }
        string tmp1 = charToString(x, n);
        string tmp2 = charToString(y, m);
        output[i] = subStringCheck(tmp1, tmp2);
    }
    for (int i = 0; i < t; i++)
    {
        cout << output[i] << endl;
    }
    return 0;
}