#include <bits/stdc++.h>

using namespace std;

#define REP(i, a, b) for (int i = a; i <= b; i++)

int main()
{
	long long n, c;
	int m = 0; // mínima cantidad de grupos que se pueden formar con valores dados

	cin >> n;

	long long r[5];

	REP(i, 0, 5 - 1)
	{
		r[i] = 0;
	}

	REP(i, 0, n - 1)
	{
		cin >> c;
		r[c % 5]++;
	}

	long long rta = 0;

	m = min(r[4], r[1]);
	r[4] -= m;
	r[1] -= m;
	rta += m;

	m = min(r[3], r[2]);
	r[3] -= m;
	r[2] -= m;
	rta += m;

	m = min(r[2] / 2, r[1]);
	r[2] -= 2 * m;
	r[1] -= m;
	rta += m;

	m = min(r[1] / 2, r[3]);
	r[1] -= 2 * m;
	r[3] -= m;
	rta += m;

	m = min(r[2], r[1] / 3);
	r[1] -= 3 * m;
	r[2] -= m;
	rta += m;

	rta += (r[1] / 5);
	r[1] -= (r[1] / 5);
	rta += r[0];
	
	m = min(r[4], r[3] / 2);
	r[3] -= 2 * m;
	r[4] -= m;
	rta += m;
	
	m = min(r[2], r[4] / 2);
	r[4] -= 2 * m;
	r[2] -= m;
	rta += m;
	
	m = min(r[1], r[3] / 3);
	r[3] -= 3 * m;
	r[1] -= m;
	rta += m;
	
	m = min(r[4], r[2] / 3);
	r[2] -= 3 * m;
	r[4] -= m;
	rta += m;
	
	m = min(r[3], r[4] / 3);
	r[4] -= 3 * m;
	r[3] -= m;
	rta += m;
	
	rta += (r[2] / 5);
	r[2] -= (r[2] / 5);
	
	rta += (r[3] / 5);
	r[3] -= (r[3] / 5);
	
	rta += (r[4] / 5);
	r[4] -= (r[4] / 5);

	cout << rta;

	return 0;
}
