#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, k;
    if (n == 1)
    {
      cout << k << endl;
      continue;
    }
    int start = 1;
    int z = log2(k);
    int t = 1 << z;
    cout << (t - 1) << " ";
    cout << (k - (t - 1)) << " ";
    for (int i = 2; i < n; i++)
    {
      cout << "0"
           << " ";
    }
    cout << endl;
  }
  return 0;
}