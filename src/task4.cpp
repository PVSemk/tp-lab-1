
#include "task4.h"

char * sum(char *x, char *y)
{
	vector<int> a;
	vector<int> b;
	vector<int> tmp;
	int i = 0;
	while (x[i] != '\0')
	{	
		a.push_back(x[i] - 48);
		i++;
	}
	reverse(a.begin(), a.end());
	i = 0;
	while (y[i] != '\0')
	{
		b.push_back(y[i] - 48);
		i++;
	}
	
	reverse(b.begin(), b.end());
	int s, inc = 0;
	int k = max(a.size(), b.size());
	for (int i = 0; i < k; i++)
	{
		s = 0;
		if (a.size() > i)
			s = a[i];
		if (b.size() > i)
			s += b[i];
		tmp.push_back((s + inc) % 10);
		inc = (s + inc) / 10;
	}
	if (inc != 0)
		tmp.push_back(1);
	k = tmp.size();
	char *ans = new char[k + 1];
	for (int i = k - 1; i >= 0; i--)
		ans[k - i - 1] = (char)(tmp[i] + 48);
	ans[k] = '\0';
	return ans;
}


