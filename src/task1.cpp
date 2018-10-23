#include <iostream>

unsigned long NOD(int long a, int long b)
{
	while (a > 0 && b > 0)

		if (a > b)
			a %= b;

		else
			b %= a;

	return a + b;
}


unsigned long findValue(unsigned int min, unsigned max)
{
	unsigned long long nok = 1;

	for (int i = min; i <= max; i++)
	{
		nok = nok * i / NOD(nok, i);
	}
	return nok;
}


int main()
{
	std::cout << findValue(1, 20);
	system("pause");
}