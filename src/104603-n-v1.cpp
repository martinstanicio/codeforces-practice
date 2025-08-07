#include <bits/stdc++.h>

using namespace std;

#define REP(i, a, b) for (int i = a; i <= b; i++)

int main()
{
	long long n, c;

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

	int rta = 0;

	while (r[4] > 0)
	{
		if (r[1] >= 1)
		{
			r[4]--;
			r[1]--;
			rta++;
			continue;
		}

		break;
	}

	while (r[3] > 0)
	{
		if (r[2] >= 1)
		{
			r[3]--;
			r[2]--;
			rta++;
			continue;
		}

		if (r[1] >= 2)
		{
			r[3]--;
			r[1] -= 2;
			rta++;
			continue;
		}

		break;
	}

	while (r[2] > 0)
	{
		if (r[2] >= 2 && r[1] >= 1)
		{
			r[2] -= 2;
			r[1]--;
			rta++;
			continue;
		}

		if (r[1] >= 3)
		{
			r[2]--;
			r[1] -= 3;
			rta++;
			continue;
		}

		break;
	}

	rta += (r[1] / 5);
	rta += r[0];

	cout << rta;

	return 0;
}
