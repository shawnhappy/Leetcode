#include"function.h"


int sum(int a, int b)
{
	return a + b;
}


double sub(double f, double s)
{
	return f - s;
}

#define maxN 1000000000
#define maxnum 0x7fffffff

void improved2findprimes()
{
	bool* prime = new bool[(maxN - 1) / 2 + 1];

	for (int pp = 0; pp<(maxN - 1) / 2 + 1; pp++)
		prime[pp] = false;

	for (int i = 3; i<maxN; i = i + 2)
		if (!prime[(i - 3) / 2])
		{
			if (maxnum / i < i)
				break;

			for (int j = i*i; j<maxN; j = j + i)
			{
				prime[(j - 3) / 2] = true;
			}
		}

	delete[] prime;
}