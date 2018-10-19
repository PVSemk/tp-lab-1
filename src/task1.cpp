#include <iostream>

unsigned long NOD(unsigned int x, unsigned int y)
{
	unsigned long n;
	if (x == y)
		return x;
	long int z;
	z = x - y;
	if (z < 0)
	{
		z = -z;
		n = NOD(x, z);
	}
	else n = NOD(y, z);
	return n;
}

unsigned long NOK(unsigned int x, unsigned int y)
{
	return x * y / NOD(x, y);
}


unsigned long findValue(unsigned int min, unsigned max)
{
	unsigned long nok = 1;

	for (int i = min; i <= max; i++)
	{
		nok = NOK(nok, i);
	}
	return nok;
}


int main()
{
	int x, y;
	x = 10;
	y = 20;
	int k = findValue(1,20);
	std::cout << k;
	system("pause");

}