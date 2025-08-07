#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a1, a2, p1, p2;

  cin >> a1 >> p1;
  cin >> a2 >> p2;

  if (a1 + a2 == p1 + p2)
  {
    cout << 'D';
    return 0;
  }

  cout << ((a1 + a2 > p1 + p2) ? 'A' : 'P');

  return 0;
}
