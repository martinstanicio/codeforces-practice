#include <bits/stdc++.h>

using namespace std;

// typedef long long ll;
#define FOR(i, a, b) for (int i = a; i <= b; i++)

int main()
{
  long long n, // cantidad de tiradas de cada equipo
      w,       // ancho del campo
      l,       // largo del campo
      tx,      // posición x del tejín
      ty,      // posición y del tejín
      x,       // posición x del tejo actual
      y;       // posición y del tejo actual
  double dt,   // distancia al tejo
      minA,    // mejor distancia del equipo azul (A)
      minR,    // mejor distancia del equipo rojo (R)
      minP;    // mejor distancia del equipo perdedor (P)
  char ganador;
  int puntos = 0;

  cin >> n;
  cin >> w >> l >> tx >> ty;

  double vectorA[n], // vector de distancias del equipo azul (A)
      vectorR[n],    // vector de distancias del equipo rojo (R)
      vectorG[n];    // vector de distancias del equipo ganador (G)

  FOR(i, 0, n - 1)
  {
    cin >> x >> y;
    dt = sqrt((tx - x) * (tx - x) + (ty - y) * (ty - y));
    vectorA[i] = dt;
    if (i != 0)
    {
      if (minA > dt)
      {
        minA = dt;
      }
    }
    else
    {
      minA = vectorA[i];
    }
  }

  FOR(i, 0, n - 1)
  {
    cin >> x >> y;
    dt = sqrt((tx - x) * (tx - x) + (ty - y) * (ty - y));
    vectorR[i] = dt;
    if (i != 0)
    {
      if (minR > dt)
      {
        minR = dt;
      }
    }
    else
    {
      minR = vectorR[i];
    }
  }

  if (minA < minR)
  {
    ganador = 'A';
    FOR(i, 0, n - 1)
    {
      vectorG[i] = vectorA[i];
    }
    minP = minR;
  }
  else
  {
    ganador = 'R';
    FOR(i, 0, n - 1)
    {
      vectorG[i] = vectorR[i];
    }
    minP = minA;
  }

  FOR(i, 0, n - 1)
  {
    if (vectorG[i] <= minP)
    {
      puntos++;
    }
  }

  cout << ganador << ' ' << puntos;

  return 0;
}
