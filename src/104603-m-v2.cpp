// Se suma el tamaño total a descargar en MBs de todos los archivos y se lo
// divide por la velocidad de la conexion total
#include <bits/stdc++.h>

using namespace std;

int main()
{
  char p;
  int n, t, m;
  float totalSize = 0;

  cin >> n >> t;

  for (int i = 0; i < n; i++)
  {
    cin >> p >> m;
    totalSize += m;
  }

  cout << totalSize / t;
}
